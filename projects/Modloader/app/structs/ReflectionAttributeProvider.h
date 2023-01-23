#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionAttributeProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionAttributeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionAttributeProvider_DEFINED)
#include <Modloader/app/structs/ReflectionAttributeProvider__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionAttributeProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionAttributeProvider_DEFINED
struct ReflectionAttributeProvider__Class;
struct ReflectionAttributeProvider {
    struct ReflectionAttributeProvider__Class* klass;
    MonitorData* monitor;
    struct ReflectionAttributeProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionAttributeProvider_FWDDECL)
#define IL2CPP_STRUCT_ReflectionAttributeProvider_FWDDECL
#include <Modloader/app/structs/ReflectionAttributeProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionAttributeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionAttributeProvider_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionAttributeProvider_FWDDECL)
#include <Modloader/app/structs/ReflectionAttributeProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionAttributeProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
