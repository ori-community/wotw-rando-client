#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FireStickInteractor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FireStickInteractor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireStickInteractor__Fields_DEFINED)
#include <Modloader/app/structs/FireStick_Usability__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FireStick_Usability__Enum_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_FireStickInteractor__Fields_DEFINED
struct MessageProvider;
struct MessageBox;
struct ActionMethod;
struct FireStickInteractor__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider* Message;
    struct MessageBox* m_message;
    bool ShouldBeLit;
    FireStick_Usability__Enum Allow;

    struct ActionMethod* OnAction;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FireStickInteractor__Fields_FWDDECL)
#define IL2CPP_STRUCT_FireStickInteractor__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_FireStickInteractor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireStickInteractor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FireStickInteractor__Fields_FWDDECL)
#include <Modloader/app/structs/FireStickInteractor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FireStickInteractor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
