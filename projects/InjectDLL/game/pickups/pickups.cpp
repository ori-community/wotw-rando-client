#include <constants.h>
#include <game/game.h>
#include <game/pickups/pickups.h>
#include <game/ui.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/app/methods/QuestNodeWisps.h>
#include <Il2CppModLoader/app/methods/SeinPickupProcessor.h>
#include <Il2CppModLoader/app/methods/SeinUI.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;
using namespace app::classes;

namespace game {
    namespace pickups {
        namespace {
            bool collecting_pickup = false;

            IL2CPP_INTERCEPT(SeinUI, void, ShakeSpiritLight_1, (app::SeinUI * this_ptr)) {
                if (collecting_pickup)
                    return;

                next::SeinUI::ShakeSpiritLight_1(this_ptr);
            }

            IL2CPP_INTERCEPT(SeinUI, void, ShakeKeystones, (app::SeinUI * this_ptr)) {
                if (collecting_pickup)
                    return;

                next::SeinUI::ShakeKeystones(this_ptr);
            }

            IL2CPP_INTERCEPT(SeinUI, void, ShakeSeeds_1, (app::SeinUI * this_ptr)) {
                if (collecting_pickup)
                    return;

                next::SeinUI::ShakeSeeds_1(this_ptr);
            }

            IL2CPP_INTERCEPT(SeinPickupProcessor, void, OnCollectMaxEnergyHalfContainerPickup, (app::SeinPickupProcessor * this_ptr, app::MaxEnergyHalfContainerPickup* pickup)) {
                ScopedSetter setter(collecting_pickup, true);
                next::SeinPickupProcessor::OnCollectMaxEnergyHalfContainerPickup(this_ptr, pickup);
            }

            IL2CPP_INTERCEPT(SeinPickupProcessor, void, OnCollectExpOrbPickup, (app::SeinPickupProcessor * this_ptr, app::ExpOrbPickup* expOrbPickup)) {
                // Any non-enemy exp drop has an associated message box.
                ScopedSetter setter(collecting_pickup, expOrbPickup->fields.MessageType != app::ExpOrbPickup_ExpOrbMessageType__Enum::None);
                next::SeinPickupProcessor::OnCollectExpOrbPickup(this_ptr, expOrbPickup);
            }

            IL2CPP_INTERCEPT(SeinPickupProcessor, void, OnCollectMaxHealthHalfContainerPickup, (app::SeinPickupProcessor * this_ptr, app::MaxHealthHalfContainerPickup* maxHealthContainerPickup)) {
                ScopedSetter setter(collecting_pickup, true);
                next::SeinPickupProcessor::OnCollectMaxHealthHalfContainerPickup(this_ptr, maxHealthContainerPickup);
            }

            IL2CPP_INTERCEPT(SeinPickupProcessor, void, OnCollectKeystonePickup, (app::SeinPickupProcessor * this_ptr, app::KeystonePickup* keystonePickup)) {
                ScopedSetter setter(collecting_pickup, true);
                next::SeinPickupProcessor::OnCollectKeystonePickup(this_ptr, keystonePickup);
                game::ui::get()->static_fields->SeinUI->fields.WasLastKeystoneAnEyestone = false;
            }

            IL2CPP_INTERCEPT(SeinPickupProcessor, void, OnCollectOrePickup, (app::SeinPickupProcessor * this_ptr, app::OrePickup* orePickup)) {
                ScopedSetter setter(collecting_pickup, true);
                next::SeinPickupProcessor::OnCollectOrePickup(this_ptr, orePickup);
            }

            IL2CPP_INTERCEPT(QuestNodeWisps, void, ApplyReward, (app::QuestNodeWisps * this_ptr)) {
                ScopedSetter setter(collecting_pickup, true);
                next::QuestNodeWisps::ApplyReward(this_ptr);
            }

            IL2CPP_INTERCEPT(SeinPickupProcessor, void, PerformPickupSequence, (app::SeinPickupProcessor * this_ptr, app::SeinPickupProcessor_CollectableInfo* info)) {}
        } // namespace

        bool should_collect_pickup() {
            return !collecting_pickup;
        }

        std::unique_ptr<ScopedSetter<bool>>

        scoped_not_collecting_pickup() {
            return std::make_unique<ScopedSetter<bool>>(collecting_pickup, false);
        }
    } // namespace pickups
} // namespace game
