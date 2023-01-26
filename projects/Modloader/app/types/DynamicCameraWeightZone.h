#pragma once
#include <Modloader/app/structs/DynamicCameraWeightZone.h>
#include <Modloader/app/structs/DynamicCameraWeightZone__Array.h>
#include <Modloader/app/structs/DynamicCameraWeightZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicCameraWeightZone {
        inline app::DynamicCameraWeightZone__Class** type_info() {
            static app::DynamicCameraWeightZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicCameraWeightZone__Class**)(modloader::win::memory::resolve_rva(0x04790590));
            }
            return cache;
        }
        inline app::DynamicCameraWeightZone__Class* get_class() {
            return il2cpp::get_class<app::DynamicCameraWeightZone__Class>(type_info(), "", "DynamicCameraWeightZone");
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
