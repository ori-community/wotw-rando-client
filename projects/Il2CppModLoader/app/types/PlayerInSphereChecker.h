#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerInSphereChecker {
        namespace {
            app::PlayerInSphereChecker__Class* type_info_ref = nullptr;
        }
        app::PlayerInSphereChecker__Class** type_info = &type_info_ref;
        inline app::PlayerInSphereChecker__Class* get_class() {
            return il2cpp::get_class<app::PlayerInSphereChecker__Class>(type_info, "", "PlayerInSphereChecker");
        }
        inline app::PlayerInSphereChecker* create() {
            return il2cpp::create_object<app::PlayerInSphereChecker>(get_class());
        }
    } // namespace PlayerInSphereChecker
} // namespace app::classes::types
