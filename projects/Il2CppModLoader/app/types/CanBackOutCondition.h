#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CanBackOutCondition {
        namespace {
            app::CanBackOutCondition__Class* type_info_ref = nullptr;
        }
        app::CanBackOutCondition__Class** type_info = &type_info_ref;
        inline app::CanBackOutCondition__Class* get_class() {
            return il2cpp::get_class<app::CanBackOutCondition__Class>(type_info, "", "CanBackOutCondition");
        }
        inline app::CanBackOutCondition* create() {
            return il2cpp::create_object<app::CanBackOutCondition>(get_class());
        }
    } // namespace CanBackOutCondition
} // namespace app::classes::types
