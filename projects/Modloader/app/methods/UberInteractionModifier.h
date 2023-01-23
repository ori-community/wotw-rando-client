#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/UberInteractionModifier.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/UberInteractionActor.h>

namespace app::classes::UberInteractionModifier {
    IL2CPP_REGISTER_METHOD(0x00FCBA80, app::Bounds, get_Bounds, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsStatic, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCBAD0, void, CacheBounds, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCBBD0, float, get_CurrentTimeA, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCBCD0, float, GetCurrentTimeA, (app::UberInteractionModifier * this_ptr, float current_time))
    IL2CPP_REGISTER_METHOD(0x00FCBD90, float, get_CurrentTimeB, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCBE90, float, GetCurrentTimeB, (app::UberInteractionModifier * this_ptr, float current_time))
    IL2CPP_REGISTER_METHOD(0x00FCBF50, void, PlayA, (app::UberInteractionModifier * this_ptr, float time, app::Vector2 pos, app::Vector2 velocity, float strength, float radius, int32_t flip))
    IL2CPP_REGISTER_METHOD(0x00FCC3F0, void, PlayB, (app::UberInteractionModifier * this_ptr, float time, app::Vector2 pos, app::Vector2 velocity, float strength, float radius, int32_t flip))
    IL2CPP_REGISTER_METHOD(0x00FCC890, void, RemoveInteraction, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCC950, app::Vector2, TransformVelocity, (app::UberInteractionModifier * this_ptr, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x00FCCAF0, bool, CheckProperties, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCCBC0, bool, ShouldOverrideA, (app::UberInteractionModifier * this_ptr, float calc_str, float difficulty, float current_time))
    IL2CPP_REGISTER_METHOD(0x00FCCD20, bool, ShouldOverrideB, (app::UberInteractionModifier * this_ptr, float calc_str, float difficulty, float current_time))
    IL2CPP_REGISTER_METHOD(0x0065B580, int32_t, get_Index, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFB9C0, void, set_Index, (app::UberInteractionModifier * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsRegistered, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063D080, void, set_IsRegistered, (app::UberInteractionModifier * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00FCCE80, bool, get_WantsToRegister, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCCE90, void, set_WantsToRegister, (app::UberInteractionModifier * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00FCCEA0, app::String*, get_InteractionName, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCCF20, void, OnDisable, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCD050, float, get_Duration, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCD140, app::IEnumerable_1_System_String_*, GetBaseVertexTextureNames, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCD2D0, app::IEnumerable_1_System_String_*, GetKeywordsForShader, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, GetStrength, (app::UberInteractionModifier * this_ptr, app::Vector3 velocity, app::Vector4 strength_val))
    IL2CPP_REGISTER_METHOD(0x00FCD460, void, OnEnable, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCD590, void, OnRegistered, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_OverrideDifficulty, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCD6F0, void, SetInteraction, (app::UberInteractionModifier * this_ptr, float time, app::Vector3 pos, app::Vector3 prev_pos, app::Vector4 strength, app::Vector3 velocity, float radius, bool explosion, bool force_play, app::UberInteractionActor* actor))
    IL2CPP_REGISTER_METHOD(0x00FCDEF0, int32_t, RandomSign, (app::UberInteractionModifier * this_ptr, float val))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, GetFlip, (app::UberInteractionModifier * this_ptr, app::Vector3 pos, bool explode))
    IL2CPP_REGISTER_METHOD(0x00FCDF70, void, SetBounds, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B32900, float, MaxRadius, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCE400, bool, DoesOverlap, (app::UberInteractionModifier * this_ptr, app::Vector3 position, app::Vector3 velocity, float radius, float z_scale))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsWater, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCE7A0, app::Vector3, GetPosition, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCE7C0, app::Vector3, GetExplodePoint, (app::UberInteractionModifier * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlay, (app::UberInteractionModifier * this_ptr, float strength, bool explosion))
    IL2CPP_REGISTER_METHOD(0x00FCE910, void, InitializeMaterialParametersShadowCopy, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCEB20, void, ctor, (app::UberInteractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCEB40, void, cctor, ())
} // namespace app::classes::UberInteractionModifier
