#pragma once
#include <Modloader/app/structs/FocusType__Enum.h>
#include <Modloader/app/structs/FocusType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FocusType__Enum {
        inline app::FocusType__Enum__Class** type_info() {
            static app::FocusType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FocusType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FocusType__Enum__Class* get_class() {
            return il2cpp::get_class<app::FocusType__Enum__Class>(type_info(), "UnityEngine", "FocusType");
        }
        inline app::FocusType__Enum* create() {
            return il2cpp::create_object<app::FocusType__Enum>(get_class());
        }
    } // namespace FocusType__Enum
} // namespace app::classes::types
