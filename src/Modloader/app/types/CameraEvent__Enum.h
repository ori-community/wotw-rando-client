#pragma once
#include <Modloader/app/structs/CameraEvent__Enum.h>
#include <Modloader/app/structs/CameraEvent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraEvent__Enum {
        inline app::CameraEvent__Enum__Class** type_info() {
            static app::CameraEvent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraEvent__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraEvent__Enum__Class* get_class() {
            return il2cpp::get_class<app::CameraEvent__Enum__Class>(type_info(), "UnityEngine.Rendering", "CameraEvent");
        }
        inline app::CameraEvent__Enum* create() {
            return il2cpp::create_object<app::CameraEvent__Enum>(get_class());
        }
    } // namespace CameraEvent__Enum
} // namespace app::classes::types
