#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabySeinController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabySeinController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySeinController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_BabySeinController__Fields_DEFINED
struct BabySein;
struct BabySeinController_AnimationSet;
struct BabySeinController__Fields {
    struct MonoBehaviour__Fields _;
    struct BabySein* BabySein;
    struct BabySeinController_AnimationSet* Animations;
    float JumpHeight;
    bool IgnoreControllerInput;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabySeinController__Fields_FWDDECL)
#define IL2CPP_STRUCT_BabySeinController__Fields_FWDDECL
#include <Modloader/app/structs/BabySein.h>
#include <Modloader/app/structs/BabySeinController_AnimationSet.h>
#endif
#undef IL2CPP_STRUCT_BabySeinController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySeinController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BabySeinController__Fields_FWDDECL)
#include <Modloader/app/structs/BabySeinController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabySeinController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
