#pragma once
#include <Modloader/app/structs/DynamicCameraWeightZone__Array.h>
#include <Modloader/app/structs/DynamicCameraWeightZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicCameraWeightZone__Array {
        inline app::DynamicCameraWeightZone__Array__Class** type_info() {
            static app::DynamicCameraWeightZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicCameraWeightZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicCameraWeightZone__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicCameraWeightZone__Array__Class>(type_info(), "", "DynamicCameraWeightZone[]");
        }
        inline app::DynamicCameraWeightZone__Array* create() {
            return il2cpp::create_object<app::DynamicCameraWeightZone__Array>(get_class());
        }
    } // namespace DynamicCameraWeightZone__Array
} // namespace app::classes::types
