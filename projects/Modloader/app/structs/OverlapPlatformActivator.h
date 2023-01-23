#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OverlapPlatformActivator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OverlapPlatformActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverlapPlatformActivator_DEFINED)
#include <Modloader/app/structs/OverlapPlatformActivator__Fields.h>
#if defined(IL2CPP_STRUCT_OverlapPlatformActivator__Fields_DEFINED)
#define IL2CPP_STRUCT_OverlapPlatformActivator_DEFINED
struct OverlapPlatformActivator__Class;
struct OverlapPlatformActivator {
    struct OverlapPlatformActivator__Class* klass;
    MonitorData* monitor;
    struct OverlapPlatformActivator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OverlapPlatformActivator_FWDDECL)
#define IL2CPP_STRUCT_OverlapPlatformActivator_FWDDECL
#include <Modloader/app/structs/OverlapPlatformActivator__Class.h>
#endif
#undef IL2CPP_STRUCT_OverlapPlatformActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverlapPlatformActivator_DEFINED) && !defined(IL2CPP_STRUCT_OverlapPlatformActivator_FWDDECL)
#include <Modloader/app/structs/OverlapPlatformActivator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OverlapPlatformActivator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
