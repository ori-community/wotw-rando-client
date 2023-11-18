#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KamikazeSkeetoHitReaction.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>

namespace app::classes::KamikazeSkeetoHitReaction {
    IL2CPP_REGISTER_METHOD(0x00E60520, void, OnCacheSerializedComponents, (app::KamikazeSkeetoHitReaction * this_ptr, app::Entity* owner))
    IL2CPP_REGISTER_METHOD(0x00E60600, bool, CanInterrupt, (app::KamikazeSkeetoHitReaction * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x00E608B0, void, ctor, (app::KamikazeSkeetoHitReaction * this_ptr))
} // namespace app::classes::KamikazeSkeetoHitReaction
