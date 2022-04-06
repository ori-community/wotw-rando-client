#pragma once

#include <enums/actions.h>

#include <string>
#include <vector>

namespace randomizer
{
    namespace input
    {
        using handle_binding_callback = void(*)(Action action, std::vector<int> const& buttons, bool respects_modifiers);

        bool read_bindings(std::string const& path, handle_binding_callback callback);
    }
}
