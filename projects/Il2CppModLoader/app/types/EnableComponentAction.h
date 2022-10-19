#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnableComponentAction {
        namespace {
            inline app::EnableComponentAction__Class* type_info_ref = nullptr;
        }
        inline app::EnableComponentAction__Class** type_info = &type_info_ref;
        inline app::EnableComponentAction__Class* get_class() {
            return il2cpp::get_class<app::EnableComponentAction__Class>(type_info, "", "EnableComponentAction");
        }
        inline app::EnableComponentAction* create() {
            return il2cpp::create_object<app::EnableComponentAction>(get_class());
        }
    } // namespace EnableComponentAction
} // namespace app::classes::types
