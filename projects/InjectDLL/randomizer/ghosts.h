#pragma once

#include <string>
#include <vector>
#include <unordered_map>

namespace ghosts {
    struct RandoGhost {
        struct ActiveAnimation {
            int resource_id;
            int index;
            int priority;
        };

        uint32_t ghost_go_gchandle = 0;
        app::GhostPlayer* ghost_player = nullptr;
        bool preventing_tpose = false;
        std::unordered_map<int, std::unordered_map<int, ActiveAnimation>> active_animations;
        //                 ^ Puppet ID             ^ Resource ID

        bool initialize();
        bool is_initialized() const;
        void set_name(const std::string& name) const;
        void play_frame_data(const std::vector<std::byte>& frame_data);
        void set_color(app::Color color) const;
        void destroy();
        app::Vector2 get_position() const;
        void extrapolate(float delta);
    };

    app::GhostRecorder* create_recorder();
    bool has_new_frame_data();
    std::vector<std::byte> get_frame_data();
    std::vector<std::byte> serialize_frame(app::GhostFrame* frame);
    app::GhostFrame* deserialize_frame(std::vector<std::byte> buffer);
} // namespace ghosts