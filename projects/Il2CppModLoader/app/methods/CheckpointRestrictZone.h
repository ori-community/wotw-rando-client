#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CheckpointRestrictZone {
    IL2CPP_REGISTER_METHOD(0x00575470, bool, ShowAbandonChallangeCondition, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01321500, bool, ShouldRefillHealthAndEnergy, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01321510, bool, RestrictedToPosition, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01321520, bool, get_CharacterAlive, ())
    IL2CPP_REGISTER_METHOD(0x013215F0, bool, IsInsideRestrictCheckpointZone, ())
    IL2CPP_REGISTER_METHOD(0x01321B40, void, UpdateBufferedCheckpoint, ())
    IL2CPP_REGISTER_METHOD(0x01322050, void, CreateCheckpoint, (app::CheckpointRestrictZone * zone, app::Vector3 target_position))
    IL2CPP_REGISTER_METHOD(0x01322920, void, Awake, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01322AF0, void, OnRestoreCheckpoint, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708B48, CheckpointRestrictZone_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01322BC0, void, OnCharacterDeath, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475E530, CheckpointRestrictZone_OnCharacterDeath__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01322CE0, void, OnEnable, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01323010, void, OnDisable, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB5CD0, app::Rect, get_Bounds, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01323340, app::Vector2, GetSize, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013234A0, bool, get_ShouldRestrict, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013235C0, bool, get_IsInsideZone, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013236D0, void, OnFixedUpdate, (app::CheckpointRestrictZone * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x01323990, void, ctor, (app::CheckpointRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013239B0, void, cctor, ())
}
