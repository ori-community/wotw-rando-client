#pragma once
#include <Modloader/app/structs/NintendoSwitch.h>
#include <Modloader/app/structs/NintendoSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoSwitch {
        inline app::NintendoSwitch__Class** type_info() {
            static app::NintendoSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NintendoSwitch__Class**)(modloader::win::memory::resolve_rva(0x04773C68));
            }
            return cache;
        }
        inline app::NintendoSwitch__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitch__Class>(type_info(), "", "NintendoSwitch");
        }
        inline app::NintendoSwitch* create() {
            return il2cpp::create_object<app::NintendoSwitch>(get_class());
        }
    } // namespace NintendoSwitch
} // namespace app::classes::types
