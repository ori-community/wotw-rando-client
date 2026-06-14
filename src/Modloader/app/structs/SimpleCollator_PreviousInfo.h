#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleCollator_PreviousInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleCollator_PreviousInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCollator_PreviousInfo_DEFINED)
#define IL2CPP_STRUCT_SimpleCollator_PreviousInfo_DEFINED
struct SimpleCollator_PreviousInfo {
    int32_t Code;
    uint8_t* SortKey;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleCollator_PreviousInfo_FWDDECL)
#define IL2CPP_STRUCT_SimpleCollator_PreviousInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_SimpleCollator_PreviousInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCollator_PreviousInfo_DEFINED) && !defined(IL2CPP_STRUCT_SimpleCollator_PreviousInfo_FWDDECL)
#include <Modloader/app/structs/SimpleCollator_PreviousInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleCollator_PreviousInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
