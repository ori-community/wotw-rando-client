#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneMetaData_SeinEquipmentWotW__Class.h>
#include <Modloader/app/structs/SceneMetaData_SeinEquipmentWotW.h>
#include <Modloader/app/structs/SceneMetaData_SeinEquipmentWotW__Array.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinEquipmentWotW {
        inline app::SceneMetaData_SeinEquipmentWotW__Class** type_info = (app::SceneMetaData_SeinEquipmentWotW__Class**)(modloader::win::memory::resolve_rva(0x0475C130));
        inline app::SceneMetaData_SeinEquipmentWotW__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinEquipmentWotW__Class>(type_info, "", "SceneMetaData", "SeinEquipmentWotW");
        }
        inline app::SceneMetaData_SeinEquipmentWotW* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinEquipmentWotW>(get_class());
        }
        inline app::SceneMetaData_SeinEquipmentWotW__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneMetaData_SeinEquipmentWotW__Array>(get_class(), size);
        }
        inline app::SceneMetaData_SeinEquipmentWotW__Array* create_array(const std::vector<app::SceneMetaData_SeinEquipmentWotW*>& items) {
            return il2cpp::array_new<app::SceneMetaData_SeinEquipmentWotW__Array>(get_class(), items);
        }
    } // namespace SceneMetaData_SeinEquipmentWotW
} // namespace app::classes::types
