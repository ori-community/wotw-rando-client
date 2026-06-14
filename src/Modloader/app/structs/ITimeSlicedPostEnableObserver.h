#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimeSlicedPostEnableObserver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimeSlicedPostEnableObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimeSlicedPostEnableObserver_DEFINED)
#define IL2CPP_STRUCT_ITimeSlicedPostEnableObserver_DEFINED
struct ITimeSlicedPostEnableObserver__Class;
struct ITimeSlicedPostEnableObserver {
    struct ITimeSlicedPostEnableObserver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimeSlicedPostEnableObserver_FWDDECL)
#define IL2CPP_STRUCT_ITimeSlicedPostEnableObserver_FWDDECL
#include <Modloader/app/structs/ITimeSlicedPostEnableObserver__Class.h>
#endif
#undef IL2CPP_STRUCT_ITimeSlicedPostEnableObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimeSlicedPostEnableObserver_DEFINED) && !defined(IL2CPP_STRUCT_ITimeSlicedPostEnableObserver_FWDDECL)
#include <Modloader/app/structs/ITimeSlicedPostEnableObserver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimeSlicedPostEnableObserver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
