#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeCondition {
        namespace {
            app::TimeCondition__Class* type_info_ref = nullptr;
        }
        app::TimeCondition__Class** type_info = &type_info_ref;
        inline app::TimeCondition__Class* get_class() {
            return il2cpp::get_class<app::TimeCondition__Class>(type_info, "", "TimeCondition");
        }
        inline app::TimeCondition* create() {
            return il2cpp::create_object<app::TimeCondition>(get_class());
        }
    } // namespace TimeCondition
} // namespace app::classes::types
