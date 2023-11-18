#pragma once
#include <Modloader/app/structs/BooleanSwitch.h>
#include <Modloader/app/structs/BooleanSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BooleanSwitch {
        inline app::BooleanSwitch__Class** type_info() {
            static app::BooleanSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BooleanSwitch__Class**)(modloader::win::memory::resolve_rva(0x0470C270));
            }
            return cache;
        }
        inline app::BooleanSwitch__Class* get_class() {
            return il2cpp::get_class<app::BooleanSwitch__Class>(type_info(), "System.Diagnostics", "BooleanSwitch");
        }
        inline app::BooleanSwitch* create() {
            return il2cpp::create_object<app::BooleanSwitch>(get_class());
        }
    } // namespace BooleanSwitch
} // namespace app::classes::types
