#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSystem__Fields_DEFINED)
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EventSystem__Fields_DEFINED
struct List_1_UnityEngine_EventSystems_BaseInputModule_;
struct BaseInputModule;
struct GameObject;
struct BaseEventData;
struct EventSystem__Fields {
    struct UIBehaviour__Fields _;
    struct List_1_UnityEngine_EventSystems_BaseInputModule_* m_SystemInputModules;
    struct BaseInputModule* m_CurrentInputModule;
    struct GameObject* m_FirstSelected;
    bool m_sendNavigationEvents;
    int32_t m_DragThreshold;
    struct GameObject* m_CurrentSelected;
    bool m_HasFocus;
    bool m_SelectionGuard;
    struct BaseEventData* m_DummyData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventSystem__Fields_FWDDECL
#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/BaseInputModule.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_EventSystems_BaseInputModule_.h>
#endif
#undef IL2CPP_STRUCT_EventSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventSystem__Fields_FWDDECL)
#include <Modloader/app/structs/EventSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
