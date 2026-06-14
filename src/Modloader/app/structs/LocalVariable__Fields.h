#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalVariable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalVariable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariable__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalVariable__Fields_DEFINED
struct __declspec(align(8)) LocalVariable__Fields {
    int32_t Index;
    int32_t _flags;
};
#endif
#if !defined(IL2CPP_STRUCT_LocalVariable__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocalVariable__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LocalVariable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocalVariable__Fields_FWDDECL)
#include <Modloader/app/structs/LocalVariable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalVariable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
