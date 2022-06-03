#include <sstream>
#include <string>
#include <vector>

namespace dev {
    struct Visualizer {
        struct State {
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
        void transform_hierarchy(std::string& output, app::Transform* transform);
        void visualize_object(Visualizer& visualizer, void* obj, int indent_start = -1, int depth_start = -1);
        void visualize_scene(Visualizer& visualizer, app::Scene& scene, int indent_start = -1, int depth_start = -1);
        std::string get_string(Visualizer& visualizer);
    } // namespace visualize
} // namespace dev
