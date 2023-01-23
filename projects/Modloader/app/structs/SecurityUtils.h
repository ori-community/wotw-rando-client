#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityUtils_DEFINED)
#define IL2CPP_STRUCT_SecurityUtils_DEFINED
struct SecurityUtils__Class;
struct SecurityUtils {
    struct SecurityUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SecurityUtils_FWDDECL)
#define IL2CPP_STRUCT_SecurityUtils_FWDDECL
#include <Modloader/app/structs/SecurityUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityUtils_DEFINED) && !defined(IL2CPP_STRUCT_SecurityUtils_FWDDECL)
#include <Modloader/app/structs/SecurityUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
