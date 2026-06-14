#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimeSlicedPreDisableObserver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimeSlicedPreDisableObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimeSlicedPreDisableObserver_DEFINED)
#define IL2CPP_STRUCT_ITimeSlicedPreDisableObserver_DEFINED
struct ITimeSlicedPreDisableObserver__Class;
struct ITimeSlicedPreDisableObserver {
    struct ITimeSlicedPreDisableObserver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimeSlicedPreDisableObserver_FWDDECL)
#define IL2CPP_STRUCT_ITimeSlicedPreDisableObserver_FWDDECL
#include <Modloader/app/structs/ITimeSlicedPreDisableObserver__Class.h>
#endif
#undef IL2CPP_STRUCT_ITimeSlicedPreDisableObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimeSlicedPreDisableObserver_DEFINED) && !defined(IL2CPP_STRUCT_ITimeSlicedPreDisableObserver_FWDDECL)
#include <Modloader/app/structs/ITimeSlicedPreDisableObserver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimeSlicedPreDisableObserver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
