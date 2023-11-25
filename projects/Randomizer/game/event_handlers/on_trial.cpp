#include <randomizer.h>

#include <Modloader/app/methods/RaceBaseState.h>
#include <Modloader/app/methods/RaceSystem.h>
#include <Modloader/app/types/RaceSystem.h>

bool is_in_trial = false;

namespace {
    auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        randomizer::game_seed().prevent_grants([]() {
            return RaceSystem::get_IsRunningRace(types::RaceSystem::get_class()->static_fields->_Instance_k__BackingField);
        });
    });
} // namespace
