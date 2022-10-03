#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasKeystonesCondition {
        namespace {
            app::HasKeystonesCondition__Class* type_info_ref = nullptr;
        }
        app::HasKeystonesCondition__Class** type_info = &type_info_ref;
        inline app::HasKeystonesCondition__Class* get_class() {
            return il2cpp::get_class<app::HasKeystonesCondition__Class>(type_info, "", "HasKeystonesCondition");
        }
        inline app::HasKeystonesCondition* create() {
            return il2cpp::create_object<app::HasKeystonesCondition>(get_class());
        }
    } // namespace HasKeystonesCondition
} // namespace app::classes::types
