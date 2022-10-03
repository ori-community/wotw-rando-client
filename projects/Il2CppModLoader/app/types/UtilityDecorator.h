#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UtilityDecorator {
        namespace {
            app::UtilityDecorator__Class* type_info_ref = nullptr;
        }
        app::UtilityDecorator__Class** type_info = &type_info_ref;
        inline app::UtilityDecorator__Class* get_class() {
            return il2cpp::get_class<app::UtilityDecorator__Class>(type_info, "Moon.BehaviourSystem", "UtilityDecorator");
        }
        inline app::UtilityDecorator* create() {
            return il2cpp::create_object<app::UtilityDecorator>(get_class());
        }
    } // namespace UtilityDecorator
} // namespace app::classes::types
