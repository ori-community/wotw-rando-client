#pragma once
#include <Modloader/app/structs/ChangesStatus__Enum.h>
#include <Modloader/app/structs/ChangesStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangesStatus__Enum {
        inline app::ChangesStatus__Enum__Class** type_info() {
            static app::ChangesStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangesStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangesStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::ChangesStatus__Enum__Class>(type_info(), "Moon.ReviewFramework", "ChangesStatus");
        }
        inline app::ChangesStatus__Enum* create() {
            return il2cpp::create_object<app::ChangesStatus__Enum>(get_class());
        }
    } // namespace ChangesStatus__Enum
} // namespace app::classes::types
