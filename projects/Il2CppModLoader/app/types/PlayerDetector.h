#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerDetector {
        namespace {
            app::PlayerDetector__Class* type_info_ref = nullptr;
        }
        app::PlayerDetector__Class** type_info = &type_info_ref;
        inline app::PlayerDetector__Class* get_class() {
            return il2cpp::get_class<app::PlayerDetector__Class>(type_info, "", "PlayerDetector");
        }
        inline app::PlayerDetector* create() {
            return il2cpp::create_object<app::PlayerDetector>(get_class());
        }
    } // namespace PlayerDetector
} // namespace app::classes::types
