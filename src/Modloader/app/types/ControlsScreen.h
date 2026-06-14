#pragma once
#include <Modloader/app/structs/ControlsScreen.h>
#include <Modloader/app/structs/ControlsScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlsScreen {
        inline app::ControlsScreen__Class** type_info() {
            static app::ControlsScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControlsScreen__Class**)(modloader::win::memory::resolve_rva(0x0471CAF8));
            }
            return cache;
        }
        inline app::ControlsScreen__Class* get_class() {
            return il2cpp::get_class<app::ControlsScreen__Class>(type_info(), "", "ControlsScreen");
        }
        inline app::ControlsScreen* create() {
            return il2cpp::create_object<app::ControlsScreen>(get_class());
        }
    } // namespace ControlsScreen
} // namespace app::classes::types
