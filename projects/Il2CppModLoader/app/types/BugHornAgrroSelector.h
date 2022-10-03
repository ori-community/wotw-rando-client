#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BugHornAgrroSelector {
        namespace {
            app::BugHornAgrroSelector__Class* type_info_ref = nullptr;
        }
        app::BugHornAgrroSelector__Class** type_info = &type_info_ref;
        inline app::BugHornAgrroSelector__Class* get_class() {
            return il2cpp::get_class<app::BugHornAgrroSelector__Class>(type_info, "", "BugHornAgrroSelector");
        }
        inline app::BugHornAgrroSelector* create() {
            return il2cpp::create_object<app::BugHornAgrroSelector>(get_class());
        }
    } // namespace BugHornAgrroSelector
} // namespace app::classes::types
