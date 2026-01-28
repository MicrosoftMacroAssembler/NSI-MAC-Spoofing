// THIS GETS CALLED EVERYTIME
typedef struct _NSI_PARAMS_SIM {
    UCHAR  Padding0[0x18];   // 0x00 - 0x17
    ULONG  Type;             // 0x18
    UCHAR  Padding1[0x04];   // 0x1C - 0x1F
    UCHAR  Padding2[0x18];   // 0x20 - 0x37
    PVOID  EntryBuffer;      // 0x38
    SIZE_T EntrySize;        // 0x40
    UCHAR  Padding3[0x20];   // 0x48 - 0x67
    SIZE_T NumberOfEntries;  // 0x68
} NSI_PARAMS_SIM, * PNSI_PARAMS_SIM;

// THIS GETS CALLED EVERYTIME
typedef struct _NSI_PARAMS_SIM {
    UCHAR  Padding0[0x18];   // 0x00 - 0x17
    ULONG  Type;             // 0x18
    UCHAR  Padding1[0x04];   // 0x1C - 0x1F
    UCHAR  Padding2[0x18];   // 0x20 - 0x37
    PVOID  EntryBuffer;      // 0x38
    SIZE_T EntrySize;        // 0x40
    UCHAR  Padding3[0x20];   // 0x48 - 0x67
    SIZE_T NumberOfEntries;  // 0x68
} NSI_PARAMS_SIM, * PNSI_PARAMS_SIM;
