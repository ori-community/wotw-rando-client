#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinEquipmentWotW__Array {
        inline app::SceneMetaData_SeinEquipmentWotW__Array__Class** type_info = (app::SceneMetaData_SeinEquipmentWotW__Array__Class**)(modloader::win::memory::resolve_rva(0x047549E0));
        inline app::SceneMetaData_SeinEquipmentWotW__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData_SeinEquipmentWotW__Array__Class>(type_info, "", "SceneMetaData+SeinEquipmentWotW[]");
        }
        inline app::SceneMetaData_SeinEquipmentWotW__Array* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinEquipmentWotW__Array>(get_class());
        }
    } // namespace SceneMetaData_SeinEquipmentWotW__Array
} // namespace app::classes::types
