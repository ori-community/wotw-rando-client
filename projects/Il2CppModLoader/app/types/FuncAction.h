#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FuncAction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FuncAction__Class** type_info;
        inline app::FuncAction__Class* get_class() {
            return il2cpp::get_class<app::FuncAction__Class>(type_info, "", "FuncAction");
        }
        inline app::FuncAction* create() {
            return il2cpp::create_object<app::FuncAction>(get_class());
        }
    } // namespace FuncAction
} // namespace app::classes::types
