#pragma once

#include <Randomizer/stats/game_stats.h>

namespace randomizer::timing {
    extern bool disable_ability_tracking;

    void override_in_game_time(float in_game_time);
    float get_in_game_time();
    void force_set_game_finished(bool value);
    const SaveFileGameStats& get_save_file_game_stats();
    SaveFileGameStatsEvents& get_save_file_game_stats_events();
}
