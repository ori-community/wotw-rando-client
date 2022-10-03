#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyLever {
        namespace {
            app::LegacyLever__Class* type_info_ref = nullptr;
        }
        app::LegacyLever__Class** type_info = &type_info_ref;
        inline app::LegacyLever__Class* get_class() {
            return il2cpp::get_class<app::LegacyLever__Class>(type_info, "", "LegacyLever");
        }
        inline app::LegacyLever* create() {
            return il2cpp::create_object<app::LegacyLever>(get_class());
        }
    } // namespace LegacyLever
} // namespace app::classes::types
