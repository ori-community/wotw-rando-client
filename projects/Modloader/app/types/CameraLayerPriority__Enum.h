#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraLayerPriority__Enum__Class.h>
#include <Modloader/app/structs/CameraLayerPriority__Enum.h>

namespace app::classes::types {
    namespace CameraLayerPriority__Enum {
        namespace {
            inline app::CameraLayerPriority__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CameraLayerPriority__Enum__Class** type_info = &type_info_ref;
        inline app::CameraLayerPriority__Enum__Class* get_class() {
            return il2cpp::get_class<app::CameraLayerPriority__Enum__Class>(type_info, "", "CameraLayerPriority");
        }
        inline app::CameraLayerPriority__Enum* create() {
            return il2cpp::create_object<app::CameraLayerPriority__Enum>(get_class());
        }
    } // namespace CameraLayerPriority__Enum
} // namespace app::classes::types
