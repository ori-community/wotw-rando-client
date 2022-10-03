#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyContactSwitch {
        namespace {
            app::LegacyContactSwitch__Class* type_info_ref = nullptr;
        }
        app::LegacyContactSwitch__Class** type_info = &type_info_ref;
        inline app::LegacyContactSwitch__Class* get_class() {
            return il2cpp::get_class<app::LegacyContactSwitch__Class>(type_info, "", "LegacyContactSwitch");
        }
        inline app::LegacyContactSwitch* create() {
            return il2cpp::create_object<app::LegacyContactSwitch>(get_class());
        }
    } // namespace LegacyContactSwitch
} // namespace app::classes::types
