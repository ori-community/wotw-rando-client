#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasOreCondition {
        namespace {
            app::HasOreCondition__Class* type_info_ref = nullptr;
        }
        app::HasOreCondition__Class** type_info = &type_info_ref;
        inline app::HasOreCondition__Class* get_class() {
            return il2cpp::get_class<app::HasOreCondition__Class>(type_info, "", "HasOreCondition");
        }
        inline app::HasOreCondition* create() {
            return il2cpp::create_object<app::HasOreCondition>(get_class());
        }
    } // namespace HasOreCondition
} // namespace app::classes::types
