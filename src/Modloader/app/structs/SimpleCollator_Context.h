#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleCollator_Context_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleCollator_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCollator_Context_DEFINED)
#include <Modloader/app/structs/CompareOptions__Enum.h>
#if defined(IL2CPP_STRUCT_CompareOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_SimpleCollator_Context_DEFINED
struct SimpleCollator_Context {
    CompareOptions__Enum Option;

    uint8_t* NeverMatchFlags;
    uint8_t* AlwaysMatchFlags;
    uint8_t* Buffer1;
    uint8_t* Buffer2;
    int32_t PrevCode;
    uint8_t* PrevSortKey;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleCollator_Context_FWDDECL)
#define IL2CPP_STRUCT_SimpleCollator_Context_FWDDECL
#endif
#undef IL2CPP_STRUCT_SimpleCollator_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCollator_Context_DEFINED) && !defined(IL2CPP_STRUCT_SimpleCollator_Context_FWDDECL)
#include <Modloader/app/structs/SimpleCollator_Context.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleCollator_Context.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
