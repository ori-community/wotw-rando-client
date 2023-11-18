#pragma once
#include <Modloader/app/structs/CameraLayerPriority__Enum.h>
#include <Modloader/app/structs/CameraLayerPriority__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraLayerPriority__Enum {
        inline app::CameraLayerPriority__Enum__Class** type_info() {
            static app::CameraLayerPriority__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraLayerPriority__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraLayerPriority__Enum__Class* get_class() {
            return il2cpp::get_class<app::CameraLayerPriority__Enum__Class>(type_info(), "", "CameraLayerPriority");
        }
        inline app::CameraLayerPriority__Enum* create() {
            return il2cpp::create_object<app::CameraLayerPriority__Enum>(get_class());
        }
    } // namespace CameraLayerPriority__Enum
} // namespace app::classes::types
