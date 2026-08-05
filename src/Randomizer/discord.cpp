#include <Modloader/modloader.h>
#include <Core/api/game/game.h>
#include <Modloader/app/methods/UnityEngine/Time.h>

#include <discord-game-sdk/discord.h>

namespace {
    discord::Core* discord = nullptr;
    common::Droppable::ptr_t on_fixed_update;
    float rate_limited_for = -1.0f;
    bool activity_update_queued = true;

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        const auto result = discord::Core::Create(934203885743144960, static_cast<uint64_t>(discord::CreateFlags::NoRequireDiscord), &discord);

        if (result == discord::Result::Ok) {
            on_fixed_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
                discord->RunCallbacks();

                if (rate_limited_for > 0.0f) {
                    rate_limited_for -= app::classes::UnityEngine::Time::get_fixedDeltaTime();
                    return;
                }

                if (!activity_update_queued) {
                    return;
                }

                activity_update_queued = false;

                discord::Activity activity{};
                activity.SetType(discord::ActivityType::Playing);
                activity.GetAssets().SetLargeImage("randomizer_icon");
                discord->ActivityManager().UpdateActivity(activity, [](discord::Result result) {
                    if (result == discord::Result::RateLimited) {
                        rate_limited_for = 5.0f;
                        activity_update_queued = true;
                    }
                });
            });
        }
    });
}
