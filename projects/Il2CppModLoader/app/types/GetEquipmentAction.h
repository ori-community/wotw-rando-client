#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetEquipmentAction {
        namespace {
            app::GetEquipmentAction__Class* type_info_ref = nullptr;
        }
        app::GetEquipmentAction__Class** type_info = &type_info_ref;
        inline app::GetEquipmentAction__Class* get_class() {
            return il2cpp::get_class<app::GetEquipmentAction__Class>(type_info, "", "GetEquipmentAction");
        }
        inline app::GetEquipmentAction* create() {
            return il2cpp::create_object<app::GetEquipmentAction>(get_class());
        }
    } // namespace GetEquipmentAction
} // namespace app::classes::types
