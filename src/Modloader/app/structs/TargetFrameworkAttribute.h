#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetFrameworkAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetFrameworkAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetFrameworkAttribute_DEFINED)
#include <Modloader/app/structs/TargetFrameworkAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TargetFrameworkAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TargetFrameworkAttribute_DEFINED
struct TargetFrameworkAttribute__Class;
struct TargetFrameworkAttribute {
    struct TargetFrameworkAttribute__Class* klass;
    MonitorData* monitor;
    struct TargetFrameworkAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetFrameworkAttribute_FWDDECL)
#define IL2CPP_STRUCT_TargetFrameworkAttribute_FWDDECL
#include <Modloader/app/structs/TargetFrameworkAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TargetFrameworkAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetFrameworkAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TargetFrameworkAttribute_FWDDECL)
#include <Modloader/app/structs/TargetFrameworkAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetFrameworkAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
