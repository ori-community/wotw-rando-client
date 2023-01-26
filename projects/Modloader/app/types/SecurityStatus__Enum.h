#pragma once
#include <Modloader/app/structs/SecurityStatus__Enum.h>
#include <Modloader/app/structs/SecurityStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityStatus__Enum {
        inline app::SecurityStatus__Enum__Class** type_info() {
            static app::SecurityStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SecurityStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SecurityStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityStatus__Enum__Class>(type_info(), "System.Net", "SecurityStatus");
        }
        inline app::SecurityStatus__Enum* create() {
            return il2cpp::create_object<app::SecurityStatus__Enum>(get_class());
        }
    } // namespace SecurityStatus__Enum
} // namespace app::classes::types
