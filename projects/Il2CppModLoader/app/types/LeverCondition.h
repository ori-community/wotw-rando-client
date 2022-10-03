#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeverCondition {
        namespace {
            app::LeverCondition__Class* type_info_ref = nullptr;
        }
        app::LeverCondition__Class** type_info = &type_info_ref;
        inline app::LeverCondition__Class* get_class() {
            return il2cpp::get_class<app::LeverCondition__Class>(type_info, "", "LeverCondition");
        }
        inline app::LeverCondition* create() {
            return il2cpp::create_object<app::LeverCondition>(get_class());
        }
    } // namespace LeverCondition
} // namespace app::classes::types
