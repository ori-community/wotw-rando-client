#pragma once
#include <Modloader/app/structs/LegacyContactSwitch.h>
#include <Modloader/app/structs/LegacyContactSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyContactSwitch {
        inline app::LegacyContactSwitch__Class** type_info() {
            static app::LegacyContactSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyContactSwitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyContactSwitch__Class* get_class() {
            return il2cpp::get_class<app::LegacyContactSwitch__Class>(type_info(), "", "LegacyContactSwitch");
        }
        inline app::LegacyContactSwitch* create() {
            return il2cpp::create_object<app::LegacyContactSwitch>(get_class());
        }
    } // namespace LegacyContactSwitch
} // namespace app::classes::types
