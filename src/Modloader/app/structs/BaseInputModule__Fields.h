#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseInputModule__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseInputModule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseInputModule__Fields_DEFINED)
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseInputModule__Fields_DEFINED
struct List_1_UnityEngine_EventSystems_RaycastResult_;
struct AxisEventData;
struct EventSystem;
struct BaseEventData;
struct BaseInput;
struct BaseInputModule__Fields {
    struct UIBehaviour__Fields _;
    struct List_1_UnityEngine_EventSystems_RaycastResult_* m_RaycastResultCache;
    struct AxisEventData* m_AxisEventData;
    struct EventSystem* m_EventSystem;
    struct BaseEventData* m_BaseEventData;
    struct BaseInput* m_InputOverride;
    struct BaseInput* m_DefaultInput;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseInputModule__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseInputModule__Fields_FWDDECL
#include <Modloader/app/structs/AxisEventData.h>
#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/BaseInput.h>
#include <Modloader/app/structs/EventSystem.h>
#include <Modloader/app/structs/List_1_UnityEngine_EventSystems_RaycastResult_.h>
#endif
#undef IL2CPP_STRUCT_BaseInputModule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseInputModule__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseInputModule__Fields_FWDDECL)
#include <Modloader/app/structs/BaseInputModule__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseInputModule__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
