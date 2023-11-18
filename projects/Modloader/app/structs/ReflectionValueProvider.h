#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionValueProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionValueProvider_DEFINED)
#include <Modloader/app/structs/ReflectionValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionValueProvider_DEFINED
struct ReflectionValueProvider__Class;
struct ReflectionValueProvider {
    struct ReflectionValueProvider__Class* klass;
    MonitorData* monitor;
    struct ReflectionValueProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionValueProvider_FWDDECL)
#define IL2CPP_STRUCT_ReflectionValueProvider_FWDDECL
#include <Modloader/app/structs/ReflectionValueProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionValueProvider_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionValueProvider_FWDDECL)
#include <Modloader/app/structs/ReflectionValueProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionValueProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
