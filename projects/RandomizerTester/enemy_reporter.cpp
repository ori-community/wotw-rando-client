#include <Core/api/game/death_listener.h>
#include <Core/core.h>

#include <Modloader/app/types/EnemyEntity.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <format>
#include <unordered_map>

namespace randomizer_tester {
    namespace {
        bool enemy_reporting = false;

        void handle_enemy_stats(core::api::death_listener::Death death, EventTiming timing) {
            if (!enemy_reporting) {
                return;
            }

            auto enemy_entity = il2cpp::unity::get_component<app::EnemyEntity>(death.game_object, app::classes::types::EnemyEntity::get_class());
            core::messages::MessageInfo info;
            info.text = std::format("Enemy died: {}", enemy_entity->klass->_0.name);
            core::message_controller().queue_central(info);
            modloader::trace(modloader::MessageType::Info, 4, "death_listener", info.text.get());
        }

        auto enemy_stats_handle = core::api::death_listener::enemy_death_event_bus().register_handler(EventTiming::Before, handle_enemy_stats);
        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            using namespace modloader::win;
            console::register_command(
                { "report", "enemy_deaths" },
                [](std::string const& command, std::vector<console::CommandParam> const& params) {
                    if (params.size() != 1) {
                        console::console_send("Invalid number of arguments. Expected 1");
                        return;
                    }

                    if (!params[0].name.empty() || (params[0].value != "start" && params[0].value != "stop")) {
                        console::console_send("Invalid value. Expected 'start' or 'stop'");
                        return;
                    }

                    enemy_reporting = params[0].value == "start";
                },
                true
            );
        });
    } // namespace
} // namespace randomizer_tester
