#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSliceSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSliceSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSliceSystem_DEFINED)
#include <Modloader/app/structs/TimeSliceSystem__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSliceSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSliceSystem_DEFINED
struct TimeSliceSystem__Class;
struct TimeSliceSystem {
    struct TimeSliceSystem__Class* klass;
    MonitorData* monitor;
    struct TimeSliceSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSliceSystem_FWDDECL)
#define IL2CPP_STRUCT_TimeSliceSystem_FWDDECL
#include <Modloader/app/structs/TimeSliceSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeSliceSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSliceSystem_DEFINED) && !defined(IL2CPP_STRUCT_TimeSliceSystem_FWDDECL)
#include <Modloader/app/structs/TimeSliceSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSliceSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
