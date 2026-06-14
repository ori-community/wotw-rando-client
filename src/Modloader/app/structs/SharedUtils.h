#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedUtils_DEFINED)
#define IL2CPP_STRUCT_SharedUtils_DEFINED
struct SharedUtils__Class;
struct SharedUtils {
    struct SharedUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SharedUtils_FWDDECL)
#define IL2CPP_STRUCT_SharedUtils_FWDDECL
#include <Modloader/app/structs/SharedUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_SharedUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedUtils_DEFINED) && !defined(IL2CPP_STRUCT_SharedUtils_FWDDECL)
#include <Modloader/app/structs/SharedUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
