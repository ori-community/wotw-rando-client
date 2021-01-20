#pragma once

#include <area/parser.h>

namespace area
{
    namespace emitter
    {
        class Area
        {
        };
    }

    emitter::Area emit(parser::AreaTree const& tree);
}
