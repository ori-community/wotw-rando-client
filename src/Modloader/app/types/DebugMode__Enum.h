#pragma once
#include <Modloader/app/structs/DebugMode__Enum.h>
#include <Modloader/app/structs/DebugMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugMode__Enum {
        inline app::DebugMode__Enum__Class** type_info() {
            static app::DebugMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DebugMode__Enum__Class>(type_info(), "uWintab", "DebugMode");
        }
        inline app::DebugMode__Enum* create() {
            return il2cpp::create_object<app::DebugMode__Enum>(get_class());
        }
    } // namespace DebugMode__Enum
} // namespace app::classes::types
