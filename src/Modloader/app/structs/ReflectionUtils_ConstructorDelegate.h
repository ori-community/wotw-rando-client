#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionUtils_ConstructorDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionUtils_ConstructorDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionUtils_ConstructorDelegate_DEFINED)
#include <Modloader/app/structs/ReflectionUtils_ConstructorDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionUtils_ConstructorDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionUtils_ConstructorDelegate_DEFINED
struct ReflectionUtils_ConstructorDelegate__Class;
struct ReflectionUtils_ConstructorDelegate {
    struct ReflectionUtils_ConstructorDelegate__Class* klass;
    MonitorData* monitor;
    struct ReflectionUtils_ConstructorDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionUtils_ConstructorDelegate_FWDDECL)
#define IL2CPP_STRUCT_ReflectionUtils_ConstructorDelegate_FWDDECL
#include <Modloader/app/structs/ReflectionUtils_ConstructorDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionUtils_ConstructorDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionUtils_ConstructorDelegate_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionUtils_ConstructorDelegate_FWDDECL)
#include <Modloader/app/structs/ReflectionUtils_ConstructorDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionUtils_ConstructorDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
