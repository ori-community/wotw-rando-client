#pragma once

namespace randomizer::game {
    /**
     * Starts a new game. Should only be used in the title screen.
     */
    void start_new_game();

    /**
     * Start preloading the spawn location asynchronously. Should only be used in the title screen.
     */
    void preload_spawn_async(const app::Vector3& start_position);

    void set_full_game_main_menu_selection_manager_active(bool active);
} // namespace randomizer::game
