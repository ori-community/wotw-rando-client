#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionProbe_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionProbe_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionProbe_DEFINED)
#include <Modloader/app/structs/ReflectionProbe__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionProbe__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionProbe_DEFINED
struct ReflectionProbe__Class;
struct ReflectionProbe {
    struct ReflectionProbe__Class* klass;
    MonitorData* monitor;
    struct ReflectionProbe__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionProbe_FWDDECL)
#define IL2CPP_STRUCT_ReflectionProbe_FWDDECL
#include <Modloader/app/structs/ReflectionProbe__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionProbe_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionProbe_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionProbe_FWDDECL)
#include <Modloader/app/structs/ReflectionProbe.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionProbe.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
