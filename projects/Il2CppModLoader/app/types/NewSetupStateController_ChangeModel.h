#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateController_ChangeModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewSetupStateController_ChangeModel__Class** type_info;
        inline app::NewSetupStateController_ChangeModel__Class* get_class() {
            return il2cpp::get_nested_class<app::NewSetupStateController_ChangeModel__Class>(type_info, "", "NewSetupStateController", "ChangeModel");
        }
        inline app::NewSetupStateController_ChangeModel* create() {
            return il2cpp::create_object<app::NewSetupStateController_ChangeModel>(get_class());
        }
    } // namespace NewSetupStateController_ChangeModel
} // namespace app::classes::types
