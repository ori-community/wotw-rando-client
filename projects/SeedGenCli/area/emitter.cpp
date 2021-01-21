#include <area/emitter.h>

namespace area
{
    emitter::Area emit(parser::AreaTree const& tree)
    {
        emitter::Area area;
        // TODO: Count all unique states, requirements and switches so we can instantiate them.

        for (const auto& anchor : tree.anchors)
        {
            
        }

        return area;
    }
}
