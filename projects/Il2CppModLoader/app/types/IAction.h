#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAction__Class** type_info;
        inline app::IAction__Class* get_class() {
            return il2cpp::get_class<app::IAction__Class>(type_info, "", "IAction");
        }
        inline app::IAction* create() {
            return il2cpp::create_object<app::IAction>(get_class());
        }
    } // namespace IAction
} // namespace app::classes::types
