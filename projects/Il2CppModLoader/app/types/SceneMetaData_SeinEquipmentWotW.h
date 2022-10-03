#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinEquipmentWotW {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneMetaData_SeinEquipmentWotW__Class** type_info;
        inline app::SceneMetaData_SeinEquipmentWotW__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinEquipmentWotW__Class>(type_info, "", "SceneMetaData", "SeinEquipmentWotW");
        }
        inline app::SceneMetaData_SeinEquipmentWotW* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinEquipmentWotW>(get_class());
        }
        inline app::SceneMetaData_SeinEquipmentWotW__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneMetaData_SeinEquipmentWotW__Array>(get_class(), size);
        }
    } // namespace SceneMetaData_SeinEquipmentWotW
} // namespace app::classes::types
