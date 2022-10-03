#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiateAction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantiateAction__Class** type_info;
        inline app::InstantiateAction__Class* get_class() {
            return il2cpp::get_class<app::InstantiateAction__Class>(type_info, "", "InstantiateAction");
        }
        inline app::InstantiateAction* create() {
            return il2cpp::create_object<app::InstantiateAction>(get_class());
        }
    } // namespace InstantiateAction
} // namespace app::classes::types
