#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsShardEquippedCondition {
        namespace {
            app::IsShardEquippedCondition__Class* type_info_ref = nullptr;
        }
        app::IsShardEquippedCondition__Class** type_info = &type_info_ref;
        inline app::IsShardEquippedCondition__Class* get_class() {
            return il2cpp::get_class<app::IsShardEquippedCondition__Class>(type_info, "", "IsShardEquippedCondition");
        }
        inline app::IsShardEquippedCondition* create() {
            return il2cpp::create_object<app::IsShardEquippedCondition>(get_class());
        }
    } // namespace IsShardEquippedCondition
} // namespace app::classes::types
