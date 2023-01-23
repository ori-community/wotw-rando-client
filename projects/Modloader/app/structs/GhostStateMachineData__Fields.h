#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostStateMachineData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostStateMachineData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostStateMachineData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostStateMachineData__Fields_DEFINED
struct MoonGuid;
struct __declspec(align(8)) GhostStateMachineData__Fields {
    struct MoonGuid* m_guid;
    int32_t m_state;
    int32_t m_eventId;
    bool _Executed_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_GhostStateMachineData__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostStateMachineData__Fields_FWDDECL
#include <Modloader/app/structs/MoonGuid.h>
#endif
#undef IL2CPP_STRUCT_GhostStateMachineData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostStateMachineData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostStateMachineData__Fields_FWDDECL)
#include <Modloader/app/structs/GhostStateMachineData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostStateMachineData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
