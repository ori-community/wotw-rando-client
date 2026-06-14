#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionUtils_DEFINED)
#define IL2CPP_STRUCT_ReflectionUtils_DEFINED
struct ReflectionUtils__Class;
struct ReflectionUtils {
    struct ReflectionUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ReflectionUtils_FWDDECL)
#define IL2CPP_STRUCT_ReflectionUtils_FWDDECL
#include <Modloader/app/structs/ReflectionUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionUtils_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionUtils_FWDDECL)
#include <Modloader/app/structs/ReflectionUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
