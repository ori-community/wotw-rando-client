#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsWarmingShadersCondition {
        namespace {
            app::IsWarmingShadersCondition__Class* type_info_ref = nullptr;
        }
        app::IsWarmingShadersCondition__Class** type_info = &type_info_ref;
        inline app::IsWarmingShadersCondition__Class* get_class() {
            return il2cpp::get_class<app::IsWarmingShadersCondition__Class>(type_info, "", "IsWarmingShadersCondition");
        }
        inline app::IsWarmingShadersCondition* create() {
            return il2cpp::create_object<app::IsWarmingShadersCondition>(get_class());
        }
    } // namespace IsWarmingShadersCondition
} // namespace app::classes::types
