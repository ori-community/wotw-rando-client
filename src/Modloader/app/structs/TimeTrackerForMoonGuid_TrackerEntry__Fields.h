#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeTrackerForMoonGuid_TrackerEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeTrackerForMoonGuid_TrackerEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeTrackerForMoonGuid_TrackerEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeTrackerForMoonGuid_TrackerEntry__Fields_DEFINED
struct MoonGuid;
struct __declspec(align(8)) TimeTrackerForMoonGuid_TrackerEntry__Fields {
    struct MoonGuid* Guid;
    float _TimeRegistered_k__BackingField;
    float _TimeToUnregister_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeTrackerForMoonGuid_TrackerEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeTrackerForMoonGuid_TrackerEntry__Fields_FWDDECL
#include <Modloader/app/structs/MoonGuid.h>
#endif
#undef IL2CPP_STRUCT_TimeTrackerForMoonGuid_TrackerEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeTrackerForMoonGuid_TrackerEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeTrackerForMoonGuid_TrackerEntry__Fields_FWDDECL)
#include <Modloader/app/structs/TimeTrackerForMoonGuid_TrackerEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeTrackerForMoonGuid_TrackerEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
