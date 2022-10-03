#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacySpring {
        namespace {
            app::LegacySpring__Class* type_info_ref = nullptr;
        }
        app::LegacySpring__Class** type_info = &type_info_ref;
        inline app::LegacySpring__Class* get_class() {
            return il2cpp::get_class<app::LegacySpring__Class>(type_info, "", "LegacySpring");
        }
        inline app::LegacySpring* create() {
            return il2cpp::create_object<app::LegacySpring>(get_class());
        }
    } // namespace LegacySpring
} // namespace app::classes::types
