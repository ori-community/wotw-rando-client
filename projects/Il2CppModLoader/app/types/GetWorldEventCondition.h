#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetWorldEventCondition {
        namespace {
            app::GetWorldEventCondition__Class* type_info_ref = nullptr;
        }
        app::GetWorldEventCondition__Class** type_info = &type_info_ref;
        inline app::GetWorldEventCondition__Class* get_class() {
            return il2cpp::get_class<app::GetWorldEventCondition__Class>(type_info, "", "GetWorldEventCondition");
        }
        inline app::GetWorldEventCondition* create() {
            return il2cpp::create_object<app::GetWorldEventCondition>(get_class());
        }
    } // namespace GetWorldEventCondition
} // namespace app::classes::types
