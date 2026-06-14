#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetFrameworkAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetFrameworkAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetFrameworkAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TargetFrameworkAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) TargetFrameworkAttribute__Fields {
    struct String* _frameworkName;
    struct String* _frameworkDisplayName;
};
#endif
#if !defined(IL2CPP_STRUCT_TargetFrameworkAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_TargetFrameworkAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TargetFrameworkAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetFrameworkAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TargetFrameworkAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/TargetFrameworkAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetFrameworkAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
