#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::KwolokNpcEntity {
    IL2CPP_REGISTER_METHOD(0x012FBAD0, app::String *, get_DialogActorName, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FBB50, app::String *, get_InteractionActorName, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CameraTargetActive, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FBBD0, app::CharacterInteractableActivationMode__Enum, get_ActivationMode, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FBBE0, void, OnDisable, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FBC90, void, ResetEntity, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FBCB0, app::KwolokNpcEntity_State__Enum, get_CurrentState, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FBCE0, void, set_CurrentState, (app::KwolokNpcEntity * this_ptr, app::KwolokNpcEntity_State__Enum value))
    IL2CPP_REGISTER_METHOD(0x012FBD10, app::KwolokNpcEntity_CleanseWellspringState__Enum, get_CleanseWellspringCurrentState, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FBD40, void, OnEnable, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FBE10, void, PlayLookAnimation, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FC080, void, OnUpdate, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FC380, void, StartIdle, (app::KwolokNpcEntity * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x012FC630, void, SetupState, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FC7C0, void, Apply, (app::KwolokNpcEntity * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x012FC7D0, app::IUberState__Array *, get_AffectingUberStates, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FC860, app::List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::KwolokNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FCA20, bool, CanInteractWithCharacter, (app::KwolokNpcEntity * this_ptr, app::ICharacter * character))
    IL2CPP_REGISTER_METHOD(0x012FCBB0, void, ctor, (app::KwolokNpcEntity * this_ptr))
}
