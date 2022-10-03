#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinEquipmentWotW__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneMetaData_SeinEquipmentWotW__Array__Class** type_info;
        inline app::SceneMetaData_SeinEquipmentWotW__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData_SeinEquipmentWotW__Array__Class>(type_info, "", "SceneMetaData+SeinEquipmentWotW[]");
        }
        inline app::SceneMetaData_SeinEquipmentWotW__Array* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinEquipmentWotW__Array>(get_class());
        }
    } // namespace SceneMetaData_SeinEquipmentWotW__Array
} // namespace app::classes::types
