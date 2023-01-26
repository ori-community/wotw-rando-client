#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LagoonBubble.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::LagoonBubble {
    IL2CPP_REGISTER_METHOD(0x00654950, app::SuspendableMask__Enum, get_Mask, (app::LagoonBubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFC6F0, void, set_Mask, (app::LagoonBubble * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x003FFD00, bool, get_IsSuspended, (app::LagoonBubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFC7A0, void, set_IsSuspended, (app::LagoonBubble * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EFCA60, void, Awake, (app::LagoonBubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFCF40, void, OnDestroy, (app::LagoonBubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFD0E0, void, OnRestoreCheckpoint, (app::LagoonBubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFD1D0, void, OnEnable, (app::LagoonBubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFD280, void, OnDisable, (app::LagoonBubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFD320, void, FixedUpdate, (app::LagoonBubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFDA40, void, OnTriggerEnter, (app::LagoonBubble * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x00EFDB90, void, OnCollisionEnter, (app::LagoonBubble * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00EFE360, bool, CanKillBubble, (app::LagoonBubble * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x00EFE4E0, void, Destroy, (app::LagoonBubble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFE630, void, OnDamageResultReceived, (app::LagoonBubble * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x00EFE9D0, void, OnReceiveWindFromPipe, (app::LagoonBubble * this_ptr, app::Vector2 push_force))
    IL2CPP_REGISTER_METHOD(0x00EFEA00, void, ctor, (app::LagoonBubble * this_ptr))
} // namespace app::classes::LagoonBubble
