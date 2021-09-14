#pragma once

#include <input/enums/actions.h>

#include <string>
#include <vector>

namespace input
{
    using handle_binding_callback = void(*)(Action action, std::vector<int> const& buttons);

    bool read_bindings(std::string const& path, handle_binding_callback callback);
}
