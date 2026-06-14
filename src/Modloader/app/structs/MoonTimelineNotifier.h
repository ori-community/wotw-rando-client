#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTimelineNotifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTimelineNotifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimelineNotifier_DEFINED)
#define IL2CPP_STRUCT_MoonTimelineNotifier_DEFINED
struct MoonTimelineNotifier__Class;
struct MoonTimelineNotifier {
    struct MoonTimelineNotifier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTimelineNotifier_FWDDECL)
#define IL2CPP_STRUCT_MoonTimelineNotifier_FWDDECL
#include <Modloader/app/structs/MoonTimelineNotifier__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTimelineNotifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimelineNotifier_DEFINED) && !defined(IL2CPP_STRUCT_MoonTimelineNotifier_FWDDECL)
#include <Modloader/app/structs/MoonTimelineNotifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTimelineNotifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
