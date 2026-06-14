#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForInputEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForInputEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForInputEntity__Fields_DEFINED)
#include <Modloader/app/structs/ButtonPressedCondition_ButtonStates__Enum.h>
#include <Modloader/app/structs/Input_Button__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Input_Button__Enum_DEFINED) && defined(IL2CPP_STRUCT_ButtonPressedCondition_ButtonStates__Enum_DEFINED)
#define IL2CPP_STRUCT_WaitForInputEntity__Fields_DEFINED
struct WaitForInputEntity__Fields {
    struct TimelineEntity__Fields _;
    Input_Button__Enum Button;

    ButtonPressedCondition_ButtonStates__Enum State;

    bool m_hasStarted;
    bool m_hasFinished;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForInputEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaitForInputEntity__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WaitForInputEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForInputEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaitForInputEntity__Fields_FWDDECL)
#include <Modloader/app/structs/WaitForInputEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForInputEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
