#include <Core/input/helpers.h>
#include <Core/input/controller_bindings.h>

#include <Modloader/modloader.h>

using namespace modloader;

namespace randomizer::input {
    namespace {
        const std::string CONTROLLER_REBIND_FILE = "controller_bindings.json";

        auto on_refresh_controller_bindings = core::input::refresh_controller_bindings_bus().register_handler([]() {
            return core::input::read_bindings(base_path() / CONTROLLER_REBIND_FILE, core::input::register_binding);
        });
    } // namespace
} // namespace randomizer::input
