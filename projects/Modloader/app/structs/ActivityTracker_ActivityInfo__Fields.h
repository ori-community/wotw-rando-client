#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivityTracker_ActivityInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivityTracker_ActivityInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityTracker_ActivityInfo__Fields_DEFINED)
#include <Modloader/app/structs/EventActivityOptions__Enum.h>
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED) && defined(IL2CPP_STRUCT_EventActivityOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_ActivityTracker_ActivityInfo__Fields_DEFINED
struct String;
struct ActivityTracker_ActivityInfo;
struct __declspec(align(8)) ActivityTracker_ActivityInfo__Fields {
    struct String* m_name;
    int64_t m_uniqueId;
    struct Guid m_guid;
    int32_t m_activityPathGuidOffset;
    int32_t m_level;
    EventActivityOptions__Enum m_eventOptions;

    int64_t m_lastChildID;
    int32_t m_stopped;
    struct ActivityTracker_ActivityInfo* m_creator;
    struct Guid m_activityIdToRestore;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivityTracker_ActivityInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivityTracker_ActivityInfo__Fields_FWDDECL
#include <Modloader/app/structs/ActivityTracker_ActivityInfo.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ActivityTracker_ActivityInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityTracker_ActivityInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivityTracker_ActivityInfo__Fields_FWDDECL)
#include <Modloader/app/structs/ActivityTracker_ActivityInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivityTracker_ActivityInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
