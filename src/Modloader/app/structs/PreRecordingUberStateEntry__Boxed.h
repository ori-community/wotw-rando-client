#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreRecordingUberStateEntry__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreRecordingUberStateEntry__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingUberStateEntry__Boxed_DEFINED)
#include <Modloader/app/structs/PreRecordingUberStateEntry.h>
#if defined(IL2CPP_STRUCT_PreRecordingUberStateEntry_DEFINED)
#define IL2CPP_STRUCT_PreRecordingUberStateEntry__Boxed_DEFINED
struct PreRecordingUberStateEntry__Class;
struct PreRecordingUberStateEntry__Boxed {
    struct PreRecordingUberStateEntry__Class* klass;
    MonitorData* monitor;
    struct PreRecordingUberStateEntry fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreRecordingUberStateEntry__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PreRecordingUberStateEntry__Boxed_FWDDECL
#include <Modloader/app/structs/PreRecordingUberStateEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_PreRecordingUberStateEntry__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingUberStateEntry__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PreRecordingUberStateEntry__Boxed_FWDDECL)
#include <Modloader/app/structs/PreRecordingUberStateEntry__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreRecordingUberStateEntry__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
