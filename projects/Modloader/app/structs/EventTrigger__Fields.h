#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTrigger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EventTrigger__Fields_DEFINED
struct List_1_UnityEngine_EventSystems_EventTrigger_Entry_;
struct EventTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_EventSystems_EventTrigger_Entry_* m_Delegates;
    struct List_1_UnityEngine_EventSystems_EventTrigger_Entry_* delegates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventTrigger__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_EventSystems_EventTrigger_Entry_.h>
#endif
#undef IL2CPP_STRUCT_EventTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/EventTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
