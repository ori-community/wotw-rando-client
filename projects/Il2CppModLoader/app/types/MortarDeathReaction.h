#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarDeathReaction {
        namespace {
            app::MortarDeathReaction__Class* type_info_ref = nullptr;
        }
        app::MortarDeathReaction__Class** type_info = &type_info_ref;
        inline app::MortarDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::MortarDeathReaction__Class>(type_info, "", "MortarDeathReaction");
        }
        inline app::MortarDeathReaction* create() {
            return il2cpp::create_object<app::MortarDeathReaction>(get_class());
        }
    } // namespace MortarDeathReaction
} // namespace app::classes::types
