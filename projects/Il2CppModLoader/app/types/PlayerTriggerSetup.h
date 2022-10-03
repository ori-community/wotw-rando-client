#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerTriggerSetup {
        namespace {
            app::PlayerTriggerSetup__Class* type_info_ref = nullptr;
        }
        app::PlayerTriggerSetup__Class** type_info = &type_info_ref;
        inline app::PlayerTriggerSetup__Class* get_class() {
            return il2cpp::get_class<app::PlayerTriggerSetup__Class>(type_info, "", "PlayerTriggerSetup");
        }
        inline app::PlayerTriggerSetup* create() {
            return il2cpp::create_object<app::PlayerTriggerSetup>(get_class());
        }
    } // namespace PlayerTriggerSetup
} // namespace app::classes::types
