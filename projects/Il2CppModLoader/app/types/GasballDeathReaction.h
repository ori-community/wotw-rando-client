#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballDeathReaction {
        namespace {
            app::GasballDeathReaction__Class* type_info_ref = nullptr;
        }
        app::GasballDeathReaction__Class** type_info = &type_info_ref;
        inline app::GasballDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::GasballDeathReaction__Class>(type_info, "", "GasballDeathReaction");
        }
        inline app::GasballDeathReaction* create() {
            return il2cpp::create_object<app::GasballDeathReaction>(get_class());
        }
    } // namespace GasballDeathReaction
} // namespace app::classes::types
