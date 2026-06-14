#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionMethodsCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionMethodsCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionMethodsCache_DEFINED)
#include <Modloader/app/structs/ReflectionMethodsCache__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionMethodsCache__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionMethodsCache_DEFINED
struct ReflectionMethodsCache__Class;
struct ReflectionMethodsCache {
    struct ReflectionMethodsCache__Class* klass;
    MonitorData* monitor;
    struct ReflectionMethodsCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionMethodsCache_FWDDECL)
#define IL2CPP_STRUCT_ReflectionMethodsCache_FWDDECL
#include <Modloader/app/structs/ReflectionMethodsCache__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionMethodsCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionMethodsCache_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionMethodsCache_FWDDECL)
#include <Modloader/app/structs/ReflectionMethodsCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionMethodsCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
