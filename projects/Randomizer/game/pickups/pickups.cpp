#include <Core/api/game/game.h>
#include <Core/api/game/ui.h>
#include <Core/api/game/player.h>

#include <Modloader/app/methods/QuestNodeWisps.h>
#include <Modloader/app/methods/SeinPickupProcessor.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;

namespace game::pickups {
    namespace {
        IL2CPP_INTERCEPT(void, SeinPickupProcessor, OnCollectMaxEnergyHalfContainerPickup, app::SeinPickupProcessor * this_ptr, app::MaxEnergyHalfContainerPickup* pickup) {
            ScopedSetter setter(core::api::game::player::prevent_default_pickup_handlers, true);
            next::SeinPickupProcessor::OnCollectMaxEnergyHalfContainerPickup(this_ptr, pickup);
        }

        IL2CPP_INTERCEPT(void, SeinPickupProcessor, OnCollectExpOrbPickup, app::SeinPickupProcessor * this_ptr, app::ExpOrbPickup* expOrbPickup) {
            // Any non-enemy exp drop has an associated message box.
            ScopedSetter setter(core::api::game::player::prevent_default_pickup_handlers, expOrbPickup->fields.MessageType != app::ExpOrbPickup_ExpOrbMessageType__Enum::None);
            next::SeinPickupProcessor::OnCollectExpOrbPickup(this_ptr, expOrbPickup);
        }

        IL2CPP_INTERCEPT(void, SeinPickupProcessor, OnCollectMaxHealthHalfContainerPickup, app::SeinPickupProcessor * this_ptr, app::MaxHealthHalfContainerPickup* maxHealthContainerPickup) {
            ScopedSetter setter(core::api::game::player::prevent_default_pickup_handlers, true);
            next::SeinPickupProcessor::OnCollectMaxHealthHalfContainerPickup(this_ptr, maxHealthContainerPickup);
        }

        IL2CPP_INTERCEPT(void, SeinPickupProcessor, OnCollectKeystonePickup, app::SeinPickupProcessor * this_ptr, app::KeystonePickup* keystonePickup) {
            ScopedSetter setter(core::api::game::player::prevent_default_pickup_handlers, true);
            next::SeinPickupProcessor::OnCollectKeystonePickup(this_ptr, keystonePickup);
            core::api::game::ui::get()->static_fields->SeinUI->fields.WasLastKeystoneAnEyestone = false;
        }

        IL2CPP_INTERCEPT(void, SeinPickupProcessor, OnCollectOrePickup, app::SeinPickupProcessor * this_ptr, app::OrePickup* orePickup) {
            ScopedSetter setter(core::api::game::player::prevent_default_pickup_handlers, true);
            next::SeinPickupProcessor::OnCollectOrePickup(this_ptr, orePickup);
        }

        IL2CPP_INTERCEPT(void, QuestNodeWisps, ApplyReward, app::QuestNodeWisps * this_ptr) {
            ScopedSetter setter(core::api::game::player::prevent_default_pickup_handlers, true);
            next::QuestNodeWisps::ApplyReward(this_ptr);
        }

        IL2CPP_INTERCEPT(void, SeinPickupProcessor, PerformPickupSequence, app::SeinPickupProcessor * this_ptr, app::SeinPickupProcessor_CollectableInfo* info) {}
    } // namespace
} // namespace game::pickups
