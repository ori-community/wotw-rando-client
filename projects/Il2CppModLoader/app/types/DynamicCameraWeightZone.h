#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicCameraWeightZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicCameraWeightZone__Class** type_info;
        inline app::DynamicCameraWeightZone__Class* get_class() {
            return il2cpp::get_class<app::DynamicCameraWeightZone__Class>(type_info, "", "DynamicCameraWeightZone");
        }
        inline app::DynamicCameraWeightZone* create() {
            return il2cpp::create_object<app::DynamicCameraWeightZone>(get_class());
        }
        inline app::DynamicCameraWeightZone__Array* create_array(int size) {
            return il2cpp::array_new<app::DynamicCameraWeightZone__Array>(get_class(), size);
        }
        inline app::DynamicCameraWeightZone__Array* create_array(const std::vector<app::DynamicCameraWeightZone*>& items) {
            return il2cpp::array_new<app::DynamicCameraWeightZone__Array>(get_class(), items);
        }
    } // namespace DynamicCameraWeightZone
} // namespace app::classes::types
