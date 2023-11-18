#pragma once
#include <Modloader/app/structs/SecurityElementType__Enum.h>
#include <Modloader/app/structs/SecurityElementType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityElementType__Enum {
        inline app::SecurityElementType__Enum__Class** type_info() {
            static app::SecurityElementType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SecurityElementType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SecurityElementType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityElementType__Enum__Class>(type_info(), "System.Security", "SecurityElementType");
        }
        inline app::SecurityElementType__Enum* create() {
            return il2cpp::create_object<app::SecurityElementType__Enum>(get_class());
        }
    } // namespace SecurityElementType__Enum
} // namespace app::classes::types
