#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <Modloader/il2cpp_helpers.h>

#include <Modloader/app/structs/GhostPlayer.h>
#include <Modloader/app/structs/GhostRecorder.h>
#include <Modloader/app/structs/GhostFrame.h>

namespace ghosts {
    struct RandoGhost {
        struct ActiveAnimation {
            int resource_id;
            int index;
            int priority;
        };

        GCHandleId ghost_go_gchandle = 0;
        app::GhostPlayer* ghost_player = nullptr;
        bool preventing_tpose = false;
        std::unordered_map<int, std::unordered_map<int, ActiveAnimation>> active_animations;
        //                 ^ Puppet ID             ^ Resource ID
        bool skip_next_extrapolation = false;
        float extrapolated_time = 0.f;

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
    app::GhostFrame* deserialize_frame(const std::vector<std::byte>& buffer);
} // namespace ghosts
