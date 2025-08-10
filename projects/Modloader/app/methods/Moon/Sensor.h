#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/Sensor.h>
#include <Modloader/app/structs/Sensor_CanSeeCharacterHelper.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Sensor {
    IL2CPP_REGISTER_METHOD(0x00ECCB90, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, app::Sensor* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FC830, app::SuspendableMask__Enum, get_Mask, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECCC30, void, set_Mask, app::Sensor* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00ECCCE0, app::GameObject*, get_TrackedCharacter, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECCE10, app::Vector3, get_CharacterPosition, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECCF20, app::Vector3, CharacterPositionEx, app::Transform* fallback)
    IL2CPP_REGISTER_METHOD(0x00ECD0D0, float, get_DistanceToCharacter, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECD170, float, DistanceToCharacterFrom, app::Transform* from)
    IL2CPP_REGISTER_METHOD(0x00ECD350, float, get_DistanceToCharacterX, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECD510, float, get_DistanceToCharacterY, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECD6D0, app::Vector2, get_DirectionToCharacter, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECD920, float, get_DirectionToCharacterX, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECDAB0, float, get_DirectionToCharacterY, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECDC40, bool, get_CanSeeCharacter, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECDC80, bool, get_HasLastSeenPosition, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECDD10, bool, get_HasLostSightLocation, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074B530, float, get_TimeSinceTargetLost, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFA40, float, get_TimeSinceTargetAcquired, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECDDA0, app::Vector3, get_LastSeenPosition, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECDE80, app::Vector3, get_LostSightLocation, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECDF60, float, get_RelativeTargetSpeedX, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECE280, bool, get_HasLineOfSightToOri, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECE3B0, bool, get_HasOriInConeOfVision, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECE790, bool, get_HasClearLineOfSightToOri, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECE8C0, app::Vector3, get_OriPredictedPosition, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECEAA0, app::Vector2, get_RayOriginPosition, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECEBB0, void, OnCacheSerializedComponents, app::Sensor* this_ptr, app::Entity* owner)
    IL2CPP_REGISTER_METHOD(0x00ECECF0, void, Awake, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECF0F0, void, OnDisable, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECF290, void, OnDestroy, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECF450, void, OnPoolSpawned, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00992AA0, void, ForceSeeCharacter, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECF5F0, app::Sensor_CanSeeCharacterHelper, CanSeeCharacterHelperFullAccess, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECF660, void, CantSeeCharacter, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECF690, void, RefreshCanSeeCharacter, app::Sensor* this_ptr, app::Vector3 start, app::Vector2 target, bool target_in_range)
    IL2CPP_REGISTER_METHOD(0x00ECF700, bool, get_UpdateCanSeeCharacterAsync, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECF7A0, void, UpdateCanSeeCharacterState, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECFC40, void, Update, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ECFC50, void, FixedUpdate, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ED0400, bool, Raycast, app::Sensor* this_ptr, app::Vector3 origin, app::Vector3 target, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00ED0710, bool, HasLineOfSightTo, app::Sensor* this_ptr, app::Vector2 target)
    IL2CPP_REGISTER_METHOD(0x00ED0750, bool, HasLineOfSight, app::Sensor* this_ptr, app::Vector2 from, app::Vector2 to)
    IL2CPP_REGISTER_METHOD(0x00ED0940, bool, HasClearLineOfSight_1, app::Sensor* this_ptr, app::Vector2 target)
    IL2CPP_REGISTER_METHOD(0x00ED0980, bool, HasClearLineOfSight_2, app::Sensor* this_ptr, app::Vector2 from, app::Vector2 to)
    IL2CPP_REGISTER_METHOD(0x00ED0C40, app::Vector3, ProjectTargetOnGround, app::Sensor* this_ptr, float distance, int32_t ground_mask)
    IL2CPP_REGISTER_METHOD(0x00ED0E70, void, OnPlayerDied, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00ED0E80,
        bool,
        IsInCone,
        app::Sensor* this_ptr,
        app::Vector3 target_position,
        app::Vector3 cone_origin_position,
        app::Vector3 cone_forward,
        float cone_angle
    )
    IL2CPP_REGISTER_METHOD(0x00ED1060, void, ctor, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ED10E0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::Sensor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::Sensor* this_ptr)
} // namespace app::classes::Moon::Sensor
