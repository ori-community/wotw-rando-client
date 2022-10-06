#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerInsideZoneChecker {
        namespace {
            app::PlayerInsideZoneChecker__Class* type_info_ref = nullptr;
        }
        app::PlayerInsideZoneChecker__Class** type_info = &type_info_ref;
        inline app::PlayerInsideZoneChecker__Class* get_class() {
            return il2cpp::get_class<app::PlayerInsideZoneChecker__Class>(type_info, "", "PlayerInsideZoneChecker");
        }
        inline app::PlayerInsideZoneChecker* create() {
            return il2cpp::create_object<app::PlayerInsideZoneChecker>(get_class());
        }
        inline app::PlayerInsideZoneChecker__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerInsideZoneChecker__Array>(get_class(), size);
        }
        inline app::PlayerInsideZoneChecker__Array* create_array(const std::vector<app::PlayerInsideZoneChecker*>& items) {
            return il2cpp::array_new<app::PlayerInsideZoneChecker__Array>(get_class(), items);
        }
    } // namespace PlayerInsideZoneChecker
} // namespace app::classes::types
