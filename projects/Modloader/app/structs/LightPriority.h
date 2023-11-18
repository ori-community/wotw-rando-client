#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightPriority_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightPriority_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightPriority_DEFINED)
#define IL2CPP_STRUCT_LightPriority_DEFINED
struct LightPriority__Class;
struct LightPriority {
    struct LightPriority__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LightPriority_FWDDECL)
#define IL2CPP_STRUCT_LightPriority_FWDDECL
#include <Modloader/app/structs/LightPriority__Class.h>
#endif
#undef IL2CPP_STRUCT_LightPriority_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightPriority_DEFINED) && !defined(IL2CPP_STRUCT_LightPriority_FWDDECL)
#include <Modloader/app/structs/LightPriority.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightPriority.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
