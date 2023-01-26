#pragma once
#include <Modloader/app/structs/CameraTargetType__Enum.h>
#include <Modloader/app/structs/CameraTargetType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraTargetType__Enum {
        inline app::CameraTargetType__Enum__Class** type_info() {
            static app::CameraTargetType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraTargetType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraTargetType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CameraTargetType__Enum__Class>(type_info(), "", "CameraTargetType");
        }
        inline app::CameraTargetType__Enum* create() {
            return il2cpp::create_object<app::CameraTargetType__Enum>(get_class());
        }
    } // namespace CameraTargetType__Enum
} // namespace app::classes::types
