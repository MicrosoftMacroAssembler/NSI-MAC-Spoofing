# NSI-MAC-Spoofing
NSI-Spoofer is MAC address spoofing that hooks the Network Store Interface completion routine. <br />
It intercepts NSI IRP completions to modify network adapter information before it reaches usermode. <br />

# What Is NSI Hooking?
NSI hooking intercepts network information queries:
- Network Store Interface - Windows kernel networking subsystem (nsi.sys)
- IRP Completion Hook - Intercepts data before returning to usermode
- Adapter Enumeration - Modifies adapter information
- MAC Address Spoofing - Changes hardware addresses

# Configuration
Configure spoofing behavior in the driver: (NSI request types)
```cpp
case 0x1: // Physical adapter request
    PNSI_ADAPTER_PARAMS adapterParams = (PNSI_ADAPTER_PARAMS)Irp->UserBuffer;
    SIZE_T entryCount = adapterParams->EntryCount + 2;
```

**Hook NsiCompletion** <br />
Result: All network queries return spoofed MAC addresses
```cpp
NTSTATUS NsiCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context)
{
    // Intercept and modify adapter data
    PNSI_ADAPTER_ROW row = GetAdapterRow(i);
    row->MacAddress = spoofed_mac; // Modify MAC before usermode sees it
}
```

# Conclusion
NSI-Spoofer provides a powerful approach for MAC address spoofing through a NSI completion hooking. <br />
I'm not posting the entire code, you will have to fill in the blanks and do the rest yourself <br />
Here is a snippet below of the NSI spoofing: <br /> <br />
<img width="1673" height="856" alt="image" src="https://github.com/user-attachments/assets/c965f08d-856d-43f3-a9f9-bf163f0a04b0" />
