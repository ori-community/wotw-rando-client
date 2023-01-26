#pragma once
#include <Modloader/app/structs/NintendoSwitchDirectory.h>
#include <Modloader/app/structs/NintendoSwitchDirectory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoSwitchDirectory {
        inline app::NintendoSwitchDirectory__Class** type_info() {
            static app::NintendoSwitchDirectory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NintendoSwitchDirectory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NintendoSwitchDirectory__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchDirectory__Class>(type_info(), "", "NintendoSwitchDirectory");
        }
        inline app::NintendoSwitchDirectory* create() {
            return il2cpp::create_object<app::NintendoSwitchDirectory>(get_class());
        }
    } // namespace NintendoSwitchDirectory
} // namespace app::classes::types
