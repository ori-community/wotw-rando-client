#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInput__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerInput__Fields_DEFINED
struct CompoundAxisInput;
struct CompoundButtonInput;
struct IButtonInput;
struct Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_;
struct List_1_SmartInput_IAxisInput_;
struct Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_;
struct InputCacheManager;
struct PlayerInput__Fields {
    struct MonoBehaviour__Fields _;
    bool Active;
    struct CompoundAxisInput* HorizontalAnalogLeft;
    struct CompoundAxisInput* VerticalAnalogLeft;
    struct CompoundAxisInput* HorizontalAnalogRight;
    struct CompoundAxisInput* VerticalAnalogRight;
    struct CompoundAxisInput* HorizontalDigiPad;
    struct CompoundAxisInput* VerticalDigiPad;
    struct CompoundAxisInput* LeftTriggerAxis;
    struct CompoundAxisInput* RightTriggerAxis;
    struct CompoundButtonInput* Down;
    struct CompoundButtonInput* Up;
    struct CompoundButtonInput* Left;
    struct CompoundButtonInput* Right;
    struct CompoundButtonInput* ChargeJump;
    struct CompoundButtonInput* LeftShoulder;
    struct CompoundButtonInput* RightShoulder;
    struct CompoundButtonInput* LeftTrigger;
    struct CompoundButtonInput* RightTrigger;
    struct CompoundButtonInput* Select;
    struct CompoundButtonInput* Start;
    struct CompoundButtonInput* LeftStick;
    struct CompoundButtonInput* RightStick;
    struct CompoundButtonInput* MenuCycleFilter;
    struct CompoundButtonInput* ActionButtonA;
    struct CompoundButtonInput* ActionButtonB;
    struct CompoundButtonInput* ActionButtonX;
    struct CompoundButtonInput* ActionButtonY;
    struct CompoundButtonInput* Cancel;
    struct CompoundButtonInput* MainMenuSaveCopy;
    struct CompoundButtonInput* MainMenuSaveDelete;
    struct CompoundButtonInput* Focus;
    struct CompoundButtonInput* LeaderboardDifficultyFilter;
    struct CompoundButtonInput* Legend;
    struct CompoundButtonInput* Pause;
    struct CompoundButtonInput* KeyboardOnly;
    struct CompoundButtonInput* Interact;
    struct CompoundButtonInput* Jump;
    struct CompoundButtonInput* Ability1;
    struct CompoundButtonInput* Ability2;
    struct CompoundButtonInput* Ability3;
    struct CompoundButtonInput* Glide;
    struct CompoundButtonInput* Grab;
    struct CompoundButtonInput* Dash;
    struct CompoundButtonInput* Burrow;
    struct CompoundButtonInput* Bash;
    struct CompoundButtonInput* Grapple;
    struct CompoundButtonInput* DialogueAdvance;
    struct CompoundButtonInput* DialogueOption1;
    struct CompoundButtonInput* DialogueOption2;
    struct CompoundButtonInput* DialogueOption3;
    struct CompoundButtonInput* DialogueExit;
    struct CompoundButtonInput* OpenMapsShardsInventory;
    struct CompoundButtonInput* OpenInventory;
    struct CompoundButtonInput* OpenWorldMap;
    struct CompoundButtonInput* OpenAreaMap;
    struct CompoundButtonInput* OpenShards;
    struct CompoundButtonInput* OpenWeaponWheel;
    struct CompoundButtonInput* PauseScreen;
    struct CompoundButtonInput* LiveSignIn;
    struct CompoundButtonInput* MapZoomIn;
    struct CompoundButtonInput* MapZoomOut;
    struct CompoundButtonInput* MenuSelect;
    struct CompoundButtonInput* MenuBack;
    struct CompoundButtonInput* MenuClose;
    struct CompoundButtonInput* MenuDown;
    struct CompoundButtonInput* MenuUp;
    struct CompoundButtonInput* MenuLeft;
    struct CompoundButtonInput* MenuRight;
    struct CompoundButtonInput* MenuPageLeft;
    struct CompoundButtonInput* MenuPageRight;
    struct CompoundButtonInput* LeaderboardCycleFilter;
    struct CompoundButtonInput* MapFilter;
    struct CompoundButtonInput* MapDetails;
    struct CompoundButtonInput* MapFocusOri;
    struct CompoundButtonInput* MapFocusObjective;
    struct IButtonInput* LeftClick;
    struct IButtonInput* RightClick;
    struct Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_* m_InputProcessorPairs;
    struct List_1_SmartInput_IAxisInput_* m_allAxisInput;
    struct Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_* m_sharedKeyCodeButtonInput;
    struct InputCacheManager* m_inputCache;
    struct IButtonInput* m_lastPressedButtonInput;
    int32_t m_lastPressedAxisInput;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerInput__Fields_FWDDECL
#include <Modloader/app/structs/CompoundAxisInput.h>
#include <Modloader/app/structs/CompoundButtonInput.h>
#include <Modloader/app/structs/Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_.h>
#include <Modloader/app/structs/IButtonInput.h>
#include <Modloader/app/structs/InputCacheManager.h>
#include <Modloader/app/structs/List_1_SmartInput_IAxisInput_.h>
#endif
#undef IL2CPP_STRUCT_PlayerInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInput__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
