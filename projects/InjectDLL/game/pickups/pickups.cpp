#include <constants.h>
#include <game/game.h>
#include <game/ui.h>
#include <game/pickups/pickups.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace game
{
    namespace pickups
    {
        namespace
        {
            bool collecting_pickup = false;

            IL2CPP_INTERCEPT(, SeinUI, void, ShakeSpiritLight, (app::SeinUI* this_ptr)) {
                if (collecting_pickup)
                    return;

                SeinUI::ShakeSpiritLight(this_ptr);
            }

            IL2CPP_INTERCEPT(, SeinUI, void, ShakeKeystones, (app::SeinUI* this_ptr)) {
                if (collecting_pickup)
                    return;

                SeinUI::ShakeKeystones(this_ptr);
            }

            IL2CPP_INTERCEPT(, SeinUI, void, ShakeSeeds, (app::SeinUI* this_ptr)) {
                if (collecting_pickup)
                    return;

                SeinUI::ShakeSeeds(this_ptr);
            }

            IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectMaxEnergyHalfContainerPickup, (__int64 this_ptr, __int64 pickupPointer)) {
                ScopedSetter setter(collecting_pickup, true);
                SeinPickupProcessor::OnCollectMaxEnergyHalfContainerPickup(this_ptr, pickupPointer);
            }

            IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectExpOrbPickup, (app::SeinPickupProcessor* this_ptr, app::ExpOrbPickup* expOrbPickup)) {
                // Any non-enemy exp drop has an associated message box.
                ScopedSetter setter(collecting_pickup, expOrbPickup->fields.MessageType != app::ExpOrbPickup_ExpOrbMessageType__Enum_None);
                SeinPickupProcessor::OnCollectExpOrbPickup(this_ptr, expOrbPickup);
            }

            IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectMaxHealthHalfContainerPickup, (app::SeinPickupProcessor* this_ptr, app::MaxHealthHalfContainerPickup* maxHealthContainerPickup)) {
                ScopedSetter setter(collecting_pickup, true);
                SeinPickupProcessor::OnCollectMaxHealthHalfContainerPickup(this_ptr, maxHealthContainerPickup);
            }

            IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectKeystonePickup, (app::SeinPickupProcessor* this_ptr, app::KeystonePickup* keystonePickup)) {
                ScopedSetter setter(collecting_pickup, true);
                SeinPickupProcessor::OnCollectKeystonePickup(this_ptr, keystonePickup);
                game::ui::get()->static_fields->SeinUI->fields.WasLastKeystoneAnEyestone = false;
            }

            IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectOrePickup, (app::SeinPickupProcessor* this_ptr, app::OrePickup* orePickup)) {
                ScopedSetter setter(collecting_pickup, true);
                SeinPickupProcessor::OnCollectOrePickup(this_ptr, orePickup);
            }

            IL2CPP_INTERCEPT(, QuestNodeWisps, void, ApplyReward, (app::QuestNodeWisps* this_ptr)) {
                ScopedSetter setter(collecting_pickup, true);
                QuestNodeWisps::ApplyReward(this_ptr);
            }

            IL2CPP_INTERCEPT(, SeinPickupProcessor, void, PerformPickupSequence, (app::SeinPickupProcessor* this_ptr, app::SeinPickupProcessor_CollectableInfo* info)) {}
        }

        bool should_collect_pickup()
        {
            return !collecting_pickup;
        }

        std::unique_ptr<ScopedSetter<bool>> collect_pickup()
        {
            return std::make_unique<ScopedSetter<bool>>(collecting_pickup, false);
        }
    }
}
