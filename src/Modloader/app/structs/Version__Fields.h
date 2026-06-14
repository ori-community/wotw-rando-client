#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Version__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Version__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Version__Fields_DEFINED)
#define IL2CPP_STRUCT_Version__Fields_DEFINED
struct __declspec(align(8)) Version__Fields {
    int32_t _Major;
    int32_t _Minor;
    int32_t _Build;
    int32_t _Revision;
};
#endif
#if !defined(IL2CPP_STRUCT_Version__Fields_FWDDECL)
#define IL2CPP_STRUCT_Version__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Version__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Version__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Version__Fields_FWDDECL)
#include <Modloader/app/structs/Version__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Version__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
