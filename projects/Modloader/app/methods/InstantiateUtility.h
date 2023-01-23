#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/InstantiateUtility.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Naru.h>
#include <Modloader/app/structs/BabySein.h>
#include <Modloader/app/structs/HealthBar.h>
#include <Modloader/app/structs/LeaderboardRowUI.h>
#include <Modloader/app/structs/RaceLeaderboardEntry.h>
#include <Modloader/app/structs/RaceLeaderboardScreen.h>
#include <Modloader/app/structs/RaceTargetIndicator.h>
#include <Modloader/app/structs/ConfirmOrCancel.h>
#include <Modloader/app/structs/SoundSource.h>

namespace app::classes::InstantiateUtility {
    IL2CPP_REGISTER_METHOD(0x0062FA00, app::GameObject*, CreateNewGameObject, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0062FCD0, bool, get_ShouldUsePooling, ())
    IL2CPP_REGISTER_METHOD(0x0062FEE0, bool, get_GhostManagerAllowPooling, ())
    IL2CPP_REGISTER_METHOD(0x00630000, void, HandleInstantiationHooks, (app::GameObject * original, app::GameObject* new_object, bool pooled, double ms_cost, bool new_in_pool))
    IL2CPP_REGISTER_METHOD(0x006303F0, app::GameObject*, InstantiateImmediate_1, (app::GameObject * original, app::Transform* parent, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHOD(0x00630550, double, StopGetTimeMilliseconds, ())
    IL2CPP_REGISTER_METHOD(0x00630680, app::GameObject*, InstantiateImmediate_2, (app::GameObject * original, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHOD(0x00630AC0, app::GameObject*, InstantiateImmediate_3, (app::GameObject * original, app::Vector3 position, app::Quaternion rotation, app::Transform* parent, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHOD(0x00630C60, app::GameObject*, InstantiateImmediate_4, (app::GameObject * original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHOD(0x00631260, void, HandleRecording, (app::Object_1 * original, app::GameObject* instance_go))
    IL2CPP_REGISTER_METHOD(0x00631410, bool, IsDestroyed_1, (app::Component_1 * comp))
    IL2CPP_REGISTER_METHOD(0x006315E0, bool, IsDestroyed_2, (app::GameObject * game_object))
    IL2CPP_REGISTER_METHOD(0x006316D0, void, Destroy_1, (app::GameObject * game_object, bool non_pooled_immediate))
    IL2CPP_REGISTER_METHOD(0x00631960, void, Destroy_2, (app::GameObject * game_object, float time))
    IL2CPP_REGISTER_METHOD(0x00631DA0, void, AddOnDestroy, (app::GameObject * get, app::Action* set))
    IL2CPP_REGISTER_METHOD(0x00631ED0, bool, Owns, (app::Object_1 * owner, app::GameObject* pooled))
    IL2CPP_REGISTER_METHOD(0x006320A0, void, SetOwnership, (app::Object_1 * pooled, app::Object_1* new_owner))
    IL2CPP_REGISTER_METHOD(0x00632220, void, ReleaseOwnership, (app::Object_1 * pooled))
    IL2CPP_REGISTER_METHOD(0x00632300, app::GameObject*, InstantiateImmediateOptional, (app::Object_1 * original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record, int32_t frames_to_test_against, int32_t allowed_instance_count, float distance_threshold))
    IL2CPP_REGISTER_METHOD(0x006324D0, bool, CheckAndRegisterInstantiateOptional, (app::GameObject * original, app::Vector3 position, app::Quaternion rotation, int32_t frames_to_test_against, int32_t allowed_instance_count, float distance_threshold))
    IL2CPP_REGISTER_METHOD(0x006326F0, void, Instantiate, (app::Object_1 * original, app::Vector3 position, app::Quaternion rotation, bool optional, int32_t max_life))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InstantiateUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00632920, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x015EB1B0, app::Object*, InstantiateImmediate_5, (app::Object * original, app::Transform* parent, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHOD(0x015EB010, app::Object*, InstantiateImmediate_6, (app::Object * original, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHOD(0x015EB540, app::Object*, InstantiateImmediate_7, (app::Object * original, app::Vector3 position, app::Quaternion rotation, app::Transform* parent, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHOD(0x015EB360, app::Object*, InstantiateImmediate_8, (app::Object * original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHOD(0x015EB010, app::Naru*, InstantiateImmediate_9, (app::Naru * original, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHODINFO(0x04740A60, InstantiateUtility_InstantiateImmediate_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB360, app::BabySein*, InstantiateImmediate_10, (app::BabySein * original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHODINFO(0x04777A80, InstantiateUtility_InstantiateImmediate_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB360, app::Naru*, InstantiateImmediate_11, (app::Naru * original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHODINFO(0x0475A490, InstantiateUtility_InstantiateImmediate_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB540, app::HealthBar*, InstantiateImmediate_12, (app::HealthBar * original, app::Vector3 position, app::Quaternion rotation, app::Transform* parent, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHODINFO(0x04793848, InstantiateUtility_InstantiateImmediate_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB010, app::LeaderboardRowUI*, InstantiateImmediate_13, (app::LeaderboardRowUI * original, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHODINFO(0x0473A2B8, InstantiateUtility_InstantiateImmediate_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB360, app::RaceLeaderboardEntry*, InstantiateImmediate_14, (app::RaceLeaderboardEntry * original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHODINFO(0x047221A0, InstantiateUtility_InstantiateImmediate_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB010, app::RaceLeaderboardScreen*, InstantiateImmediate_15, (app::RaceLeaderboardScreen * original, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHODINFO(0x047777F8, InstantiateUtility_InstantiateImmediate_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB010, app::RaceTargetIndicator*, InstantiateImmediate_16, (app::RaceTargetIndicator * original, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHODINFO(0x0472EDD8, InstantiateUtility_InstantiateImmediate_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB360, app::ConfirmOrCancel*, InstantiateImmediate_17, (app::ConfirmOrCancel * original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHODINFO(0x04703BD8, InstantiateUtility_InstantiateImmediate_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB360, app::SoundSource*, InstantiateImmediate_18, (app::SoundSource * original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record))
    IL2CPP_REGISTER_METHODINFO(0x04775B20, InstantiateUtility_InstantiateImmediate_17__MethodInfo)
} // namespace app::classes::InstantiateUtility
