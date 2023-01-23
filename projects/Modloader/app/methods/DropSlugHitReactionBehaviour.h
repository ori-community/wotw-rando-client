#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DropSlugHitReactionBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/DamageType__Enum.h>

namespace app::classes::DropSlugHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00BE4BC0, void, OnInitializeTask, (app::DropSlugHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00BE4C90, void, OnEnterTask, (app::DropSlugHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00BE5060, float, GetKickbackMultiplier, (app::DropSlugHitReactionBehaviour * this_ptr, app::DamageType__Enum damage_type))
    IL2CPP_REGISTER_METHOD(0x00BE50A0, void, ctor, (app::DropSlugHitReactionBehaviour * this_ptr))
} // namespace app::classes::DropSlugHitReactionBehaviour
