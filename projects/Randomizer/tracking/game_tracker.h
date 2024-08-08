#pragma once

#include <Core/enums/game_areas.h>
#include <Randomizer/stats/game_stats.h>

namespace randomizer::timing {
    extern bool disable_ability_tracking;

    void notify_pickup_collected(GameArea area, const std::string& location_name);
    void override_in_game_time(float in_game_time);
    float get_in_game_time();
    void force_set_game_finished(bool value);
    const SaveFileGameStats& get_save_file_game_stats();
    const CheckpointGameStats& get_checkpoint_game_stats();
}
