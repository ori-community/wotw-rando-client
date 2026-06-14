#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionUtils_SetDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionUtils_SetDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionUtils_SetDelegate_DEFINED)
#include <Modloader/app/structs/ReflectionUtils_SetDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionUtils_SetDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionUtils_SetDelegate_DEFINED
struct ReflectionUtils_SetDelegate__Class;
struct ReflectionUtils_SetDelegate {
    struct ReflectionUtils_SetDelegate__Class* klass;
    MonitorData* monitor;
    struct ReflectionUtils_SetDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionUtils_SetDelegate_FWDDECL)
#define IL2CPP_STRUCT_ReflectionUtils_SetDelegate_FWDDECL
#include <Modloader/app/structs/ReflectionUtils_SetDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionUtils_SetDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionUtils_SetDelegate_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionUtils_SetDelegate_FWDDECL)
#include <Modloader/app/structs/ReflectionUtils_SetDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionUtils_SetDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
