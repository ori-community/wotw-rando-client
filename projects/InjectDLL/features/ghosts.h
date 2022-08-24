#pragma once

#include <string>
#include <vector>

namespace ghosts {
    struct RandoGhost {
        uint32_t ghost_go_gchandle = 0;
        app::GhostPlayer* ghost_player = nullptr;

        bool initialize();
        bool is_initialized();
        void set_name(std::string name);
        void play_frame_data(std::vector<std::byte> frame_data);
        void set_color(app::Color color);
        void destroy();
        app::Vector2 get_position();
    };

    app::GhostRecorder* create_recorder();
    std::vector<std::byte> get_last_frame_data_and_flush(app::GhostRecorder* ghost_recorder);
    std::vector<std::byte> serialize_frame(app::GhostFrame* frame);
    app::GhostFrame* deserialize_frame(std::vector<std::byte> buffer);
} // namespace ghosts