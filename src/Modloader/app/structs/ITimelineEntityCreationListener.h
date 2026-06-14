#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimelineEntityCreationListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimelineEntityCreationListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineEntityCreationListener_DEFINED)
#define IL2CPP_STRUCT_ITimelineEntityCreationListener_DEFINED
struct ITimelineEntityCreationListener__Class;
struct ITimelineEntityCreationListener {
    struct ITimelineEntityCreationListener__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimelineEntityCreationListener_FWDDECL)
#define IL2CPP_STRUCT_ITimelineEntityCreationListener_FWDDECL
#include <Modloader/app/structs/ITimelineEntityCreationListener__Class.h>
#endif
#undef IL2CPP_STRUCT_ITimelineEntityCreationListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineEntityCreationListener_DEFINED) && !defined(IL2CPP_STRUCT_ITimelineEntityCreationListener_FWDDECL)
#include <Modloader/app/structs/ITimelineEntityCreationListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimelineEntityCreationListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
