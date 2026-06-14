#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Button__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Button__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Button__Fields_DEFINED)
#include <Modloader/app/structs/Selectable__Fields.h>
#if defined(IL2CPP_STRUCT_Selectable__Fields_DEFINED)
#define IL2CPP_STRUCT_Button__Fields_DEFINED
struct Button_ButtonClickedEvent;
struct Button__Fields {
    struct Selectable__Fields _;
    struct Button_ButtonClickedEvent* m_OnClick;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Button__Fields_FWDDECL)
#define IL2CPP_STRUCT_Button__Fields_FWDDECL
#include <Modloader/app/structs/Button_ButtonClickedEvent.h>
#endif
#undef IL2CPP_STRUCT_Button__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Button__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Button__Fields_FWDDECL)
#include <Modloader/app/structs/Button__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Button__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
