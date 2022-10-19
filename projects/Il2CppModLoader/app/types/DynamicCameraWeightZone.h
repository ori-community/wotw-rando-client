#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicCameraWeightZone {
        inline app::DynamicCameraWeightZone__Class** type_info = (app::DynamicCameraWeightZone__Class**)(modloader::win::memory::resolve_rva(0x04790590));
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
