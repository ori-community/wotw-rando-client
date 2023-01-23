#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseEventData__Fields_DEFINED)
#include <Modloader/app/structs/AbstractEventData__Fields.h>
#if defined(IL2CPP_STRUCT_AbstractEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseEventData__Fields_DEFINED
struct EventSystem;
struct BaseEventData__Fields {
    struct AbstractEventData__Fields _;
    struct EventSystem* m_EventSystem;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseEventData__Fields_FWDDECL
#include <Modloader/app/structs/EventSystem.h>
#endif
#undef IL2CPP_STRUCT_BaseEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseEventData__Fields_FWDDECL)
#include <Modloader/app/structs/BaseEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
