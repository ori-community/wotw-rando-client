#include <sstream>
#include <string>

namespace dev
{
    struct Visualizer
    {
        int indent_level = 0;
        std::string indent = "  ";
        std::string new_line = "\n";
        std::stringstream stream;
    };

    namespace visualize
    {
        void visualize_object(Visualizer& visualizer, Il2CppObject* obj);
        std::string get_string(Visualizer& visualizer);
    }
}
