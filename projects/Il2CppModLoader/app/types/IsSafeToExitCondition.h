#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsSafeToExitCondition {
        namespace {
            app::IsSafeToExitCondition__Class* type_info_ref = nullptr;
        }
        app::IsSafeToExitCondition__Class** type_info = &type_info_ref;
        inline app::IsSafeToExitCondition__Class* get_class() {
            return il2cpp::get_class<app::IsSafeToExitCondition__Class>(type_info, "", "IsSafeToExitCondition");
        }
        inline app::IsSafeToExitCondition* create() {
            return il2cpp::create_object<app::IsSafeToExitCondition>(get_class());
        }
    } // namespace IsSafeToExitCondition
} // namespace app::classes::types
