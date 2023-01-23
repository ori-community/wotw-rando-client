#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivityFilter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivityFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityFilter__Fields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_ActivityFilter__Fields_DEFINED
struct ConcurrentDictionary_2_System_Guid_System_Int32_;
struct ConcurrentDictionary_2_System_Guid_System_Tuple_2_;
struct ActivityFilter;
struct Action_1_Guid_;
struct __declspec(align(8)) ActivityFilter__Fields {
    struct ConcurrentDictionary_2_System_Guid_System_Int32_* m_activeActivities;
    struct ConcurrentDictionary_2_System_Guid_System_Tuple_2_* m_rootActiveActivities;
    struct Guid m_providerGuid;
    int32_t m_eventId;
    int32_t m_samplingFreq;
    int32_t m_curSampleCount;
    int32_t m_perEventSourceSessionId;
    struct ActivityFilter* m_next;
    struct Action_1_Guid_* m_myActivityDelegate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivityFilter__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivityFilter__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Guid_.h>
#include <Modloader/app/structs/ActivityFilter.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_System_Guid_System_Int32_.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_System_Guid_System_Tuple_2_.h>
#endif
#undef IL2CPP_STRUCT_ActivityFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityFilter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivityFilter__Fields_FWDDECL)
#include <Modloader/app/structs/ActivityFilter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivityFilter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
