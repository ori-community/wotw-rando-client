#pragma once
#include <Modloader/app/structs/RotationOrder__Enum.h>
#include <Modloader/app/structs/RotationOrder__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationOrder__Enum {
        inline app::RotationOrder__Enum__Class** type_info() {
            static app::RotationOrder__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationOrder__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::RotationOrder__Enum__Class>(type_info(), "UnityEngine", "RotationOrder");
        }
        inline app::RotationOrder__Enum* create() {
            return il2cpp::create_object<app::RotationOrder__Enum>(get_class());
        }
    } // namespace RotationOrder__Enum
} // namespace app::classes::types
