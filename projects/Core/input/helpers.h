#pragma once

#include <Core/enums/actions.h>

#include <Core/macros.h>
#include <vector>

namespace core {
    namespace input {
        using handle_binding_callback = void (*)(Action action, std::vector<int> const& buttons, bool respects_modifiers);

        CORE_DLLEXPORT bool read_bindings(std::filesystem::path const& path, handle_binding_callback callback);
    } // namespace input
} // namespace randomizer
