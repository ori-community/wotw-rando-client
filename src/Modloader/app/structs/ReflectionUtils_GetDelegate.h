#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionUtils_GetDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionUtils_GetDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionUtils_GetDelegate_DEFINED)
#include <Modloader/app/structs/ReflectionUtils_GetDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionUtils_GetDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionUtils_GetDelegate_DEFINED
struct ReflectionUtils_GetDelegate__Class;
struct ReflectionUtils_GetDelegate {
    struct ReflectionUtils_GetDelegate__Class* klass;
    MonitorData* monitor;
    struct ReflectionUtils_GetDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionUtils_GetDelegate_FWDDECL)
#define IL2CPP_STRUCT_ReflectionUtils_GetDelegate_FWDDECL
#include <Modloader/app/structs/ReflectionUtils_GetDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionUtils_GetDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionUtils_GetDelegate_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionUtils_GetDelegate_FWDDECL)
#include <Modloader/app/structs/ReflectionUtils_GetDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionUtils_GetDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
