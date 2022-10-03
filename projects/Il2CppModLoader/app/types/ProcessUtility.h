#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProcessUtility {
        namespace {
            app::ProcessUtility__Class* type_info_ref = nullptr;
        }
        app::ProcessUtility__Class** type_info = &type_info_ref;
        inline app::ProcessUtility__Class* get_class() {
            return il2cpp::get_class<app::ProcessUtility__Class>(type_info, "", "ProcessUtility");
        }
        inline app::ProcessUtility* create() {
            return il2cpp::create_object<app::ProcessUtility>(get_class());
        }
    } // namespace ProcessUtility
} // namespace app::classes::types
