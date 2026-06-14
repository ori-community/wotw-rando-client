#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxControllerStateChangedEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxControllerStateChangedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerStateChangedEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/XInputState.h>
#if defined(IL2CPP_STRUCT_XInputState_DEFINED)
#define IL2CPP_STRUCT_XboxControllerStateChangedEventArgs__Fields_DEFINED
struct __declspec(align(8)) XboxControllerStateChangedEventArgs__Fields {
    struct XInputState _CurrentInputState_k__BackingField;
    struct XInputState _PreviousInputState_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxControllerStateChangedEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxControllerStateChangedEventArgs__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_XboxControllerStateChangedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerStateChangedEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxControllerStateChangedEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/XboxControllerStateChangedEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxControllerStateChangedEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
