#pragma once
#include <Modloader/app/structs/RotationDriveMode__Enum.h>
#include <Modloader/app/structs/RotationDriveMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationDriveMode__Enum {
        inline app::RotationDriveMode__Enum__Class** type_info() {
            static app::RotationDriveMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationDriveMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationDriveMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::RotationDriveMode__Enum__Class>(type_info(), "UnityEngine", "RotationDriveMode");
        }
        inline app::RotationDriveMode__Enum* create() {
            return il2cpp::create_object<app::RotationDriveMode__Enum>(get_class());
        }
    } // namespace RotationDriveMode__Enum
} // namespace app::classes::types
