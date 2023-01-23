#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoIncrementInt64__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoIncrementInt64__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementInt64__VTable_DEFINED)
#define IL2CPP_STRUCT_AutoIncrementInt64__VTable_DEFINED
struct AutoIncrementInt64__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Current;
    VirtualInvokeData set_Current;
    VirtualInvokeData get_Seed;
    VirtualInvokeData set_Seed;
    VirtualInvokeData get_Step;
    VirtualInvokeData set_Step;
    VirtualInvokeData get_DataType;
    VirtualInvokeData SetCurrent;
    VirtualInvokeData SetCurrentAndIncrement;
    VirtualInvokeData MoveAfter;
};
#endif
#if !defined(IL2CPP_STRUCT_AutoIncrementInt64__VTable_FWDDECL)
#define IL2CPP_STRUCT_AutoIncrementInt64__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_AutoIncrementInt64__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementInt64__VTable_DEFINED) && !defined(IL2CPP_STRUCT_AutoIncrementInt64__VTable_FWDDECL)
#include <Modloader/app/structs/AutoIncrementInt64__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoIncrementInt64__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
