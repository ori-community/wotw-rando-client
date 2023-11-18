#pragma once
#include <Modloader/app/structs/RotationSpace__Enum.h>
#include <Modloader/app/structs/RotationSpace__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationSpace__Enum {
        inline app::RotationSpace__Enum__Class** type_info() {
            static app::RotationSpace__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationSpace__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::RotationSpace__Enum__Class>(type_info(), "Moon", "RotationSpace");
        }
        inline app::RotationSpace__Enum* create() {
            return il2cpp::create_object<app::RotationSpace__Enum>(get_class());
        }
    } // namespace RotationSpace__Enum
} // namespace app::classes::types
