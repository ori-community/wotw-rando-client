#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlsScreen {
        inline app::ControlsScreen__Class** type_info = (app::ControlsScreen__Class**)(modloader::win::memory::resolve_rva(0x0471CAF8));
        inline app::ControlsScreen__Class* get_class() {
            return il2cpp::get_class<app::ControlsScreen__Class>(type_info, "", "ControlsScreen");
        }
        inline app::ControlsScreen* create() {
            return il2cpp::create_object<app::ControlsScreen>(get_class());
        }
    } // namespace ControlsScreen
} // namespace app::classes::types
