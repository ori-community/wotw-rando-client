#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSource__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSource__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource__StaticFields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_EventSource__StaticFields_DEFINED
struct Action_1_Guid_;
struct Byte__Array;
struct EventSource__StaticFields {
    uint32_t s_currentPid;
    uint8_t m_EventSourceExceptionRecurenceCount;
    struct Action_1_Guid_* s_activityDying;
    struct Byte__Array* namespaceBytes;
    struct Guid AspNetEventSourceGuid;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSource__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EventSource__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_Guid_.h>
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_EventSource__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EventSource__StaticFields_FWDDECL)
#include <Modloader/app/structs/EventSource__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSource__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
