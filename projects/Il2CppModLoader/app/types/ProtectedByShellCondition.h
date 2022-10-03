#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProtectedByShellCondition {
        namespace {
            app::ProtectedByShellCondition__Class* type_info_ref = nullptr;
        }
        app::ProtectedByShellCondition__Class** type_info = &type_info_ref;
        inline app::ProtectedByShellCondition__Class* get_class() {
            return il2cpp::get_class<app::ProtectedByShellCondition__Class>(type_info, "", "ProtectedByShellCondition");
        }
        inline app::ProtectedByShellCondition* create() {
            return il2cpp::create_object<app::ProtectedByShellCondition>(get_class());
        }
    } // namespace ProtectedByShellCondition
} // namespace app::classes::types
