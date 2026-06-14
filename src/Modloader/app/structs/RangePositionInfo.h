#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangePositionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangePositionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangePositionInfo_DEFINED)
#define IL2CPP_STRUCT_RangePositionInfo_DEFINED
struct BitSet;
struct Decimal__Array;
struct RangePositionInfo {
    struct BitSet* curpos;
    struct Decimal__Array* rangeCounters;
};
#endif
#if !defined(IL2CPP_STRUCT_RangePositionInfo_FWDDECL)
#define IL2CPP_STRUCT_RangePositionInfo_FWDDECL
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/Decimal__Array.h>
#endif
#undef IL2CPP_STRUCT_RangePositionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangePositionInfo_DEFINED) && !defined(IL2CPP_STRUCT_RangePositionInfo_FWDDECL)
#include <Modloader/app/structs/RangePositionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangePositionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
