#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConceptScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConceptScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConceptScreen__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ConceptScreen__Fields_DEFINED
struct CleverMenuItemSelectionManager;
struct Renderer;
struct LegacyTransparencyAnimator;
struct HashSet_1_Moon_ISuspendable_;
struct SoundProvider;
struct List_1_ConceptScreen_ImageData_;
struct ConceptScreen__Fields {
    struct MonoBehaviour__Fields _;
    struct CleverMenuItemSelectionManager* Parent;
    struct Renderer* Screen;
    struct LegacyTransparencyAnimator* FadeIn;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct HashSet_1_Moon_ISuspendable_* m_suspenables;
    int32_t m_index;
    struct SoundProvider* SwitchSound;
    struct SoundProvider* OpenSound;
    struct SoundProvider* CloseSound;
    struct List_1_ConceptScreen_ImageData_* Images;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConceptScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConceptScreen__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_ConceptScreen_ImageData_.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_ConceptScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConceptScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConceptScreen__Fields_FWDDECL)
#include <Modloader/app/structs/ConceptScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConceptScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
