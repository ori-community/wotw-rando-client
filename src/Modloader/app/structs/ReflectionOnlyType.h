#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionOnlyType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionOnlyType_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionOnlyType_DEFINED)
#include <Modloader/app/structs/ReflectionOnlyType__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionOnlyType__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionOnlyType_DEFINED
struct ReflectionOnlyType__Class;
struct ReflectionOnlyType {
    struct ReflectionOnlyType__Class* klass;
    MonitorData* monitor;
    struct ReflectionOnlyType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionOnlyType_FWDDECL)
#define IL2CPP_STRUCT_ReflectionOnlyType_FWDDECL
#include <Modloader/app/structs/ReflectionOnlyType__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionOnlyType_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionOnlyType_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionOnlyType_FWDDECL)
#include <Modloader/app/structs/ReflectionOnlyType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionOnlyType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
