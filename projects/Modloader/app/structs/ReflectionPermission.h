#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionPermission_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionPermission_DEFINED)
#include <Modloader/app/structs/ReflectionPermission__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionPermission__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionPermission_DEFINED
struct ReflectionPermission__Class;
struct ReflectionPermission {
    struct ReflectionPermission__Class* klass;
    MonitorData* monitor;
    struct ReflectionPermission__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionPermission_FWDDECL)
#define IL2CPP_STRUCT_ReflectionPermission_FWDDECL
#include <Modloader/app/structs/ReflectionPermission__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionPermission_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionPermission_FWDDECL)
#include <Modloader/app/structs/ReflectionPermission.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionPermission.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
