#pragma once
#include <Modloader/app/structs/Ak3DPositionType__Enum.h>
#include <Modloader/app/structs/Ak3DPositionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ak3DPositionType__Enum {
        inline app::Ak3DPositionType__Enum__Class** type_info() {
            static app::Ak3DPositionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Ak3DPositionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Ak3DPositionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::Ak3DPositionType__Enum__Class>(type_info(), "", "Ak3DPositionType");
        }
        inline app::Ak3DPositionType__Enum* create() {
            return il2cpp::create_object<app::Ak3DPositionType__Enum>(get_class());
        }
    } // namespace Ak3DPositionType__Enum
} // namespace app::classes::types
