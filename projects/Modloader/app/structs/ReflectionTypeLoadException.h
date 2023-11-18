#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionTypeLoadException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionTypeLoadException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionTypeLoadException_DEFINED)
#include <Modloader/app/structs/ReflectionTypeLoadException__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionTypeLoadException__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionTypeLoadException_DEFINED
struct ReflectionTypeLoadException__Class;
struct ReflectionTypeLoadException {
    struct ReflectionTypeLoadException__Class* klass;
    MonitorData* monitor;
    struct ReflectionTypeLoadException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionTypeLoadException_FWDDECL)
#define IL2CPP_STRUCT_ReflectionTypeLoadException_FWDDECL
#include <Modloader/app/structs/ReflectionTypeLoadException__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionTypeLoadException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionTypeLoadException_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionTypeLoadException_FWDDECL)
#include <Modloader/app/structs/ReflectionTypeLoadException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionTypeLoadException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
