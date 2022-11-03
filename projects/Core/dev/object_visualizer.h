#pragma once

#include <sstream>
#include <string>
#include <vector>
#include <Core/macros.h>

namespace dev {
    struct CORE_DLLEXPORT Visualizer {
        struct CORE_DLLEXPORT State {
            int id;
            int indent_level;
            int depth;
        };

        enum class InfoLevel {
            Low,
            Medium,
            High,
            Full
        };

        int initial_indent_level = 0;
        int initial_depth = 2000000;
        InfoLevel level = InfoLevel::Medium;
        std::string indent = "  ";
        std::string new_line = "\n";
        std::stringstream stream;

        size_t last_queue_size;
        State current_state;
        std::vector<std::pair<Il2CppObject*, State>> visualizer_queue;
    };

    namespace visualize {
        CORE_DLLEXPORT void transform_hierarchy(std::string& output, app::Transform* transform);
        CORE_DLLEXPORT void visualize_object(Visualizer& visualizer, void* obj, int indent_start = -1, int depth_start = -1);
        CORE_DLLEXPORT void visualize_scene(Visualizer& visualizer, app::Scene& scene, int indent_start = -1, int depth_start = -1);
        CORE_DLLEXPORT std::string get_string(Visualizer& visualizer);
    } // namespace visualize
} // namespace dev
