#pragma once
#include <Modloader/app/structs/CharSet__Enum.h>
#include <Modloader/app/structs/CharSet__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharSet__Enum {
        inline app::CharSet__Enum__Class** type_info() {
            static app::CharSet__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharSet__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharSet__Enum__Class* get_class() {
            return il2cpp::get_class<app::CharSet__Enum__Class>(type_info(), "System.Runtime.InteropServices", "CharSet");
        }
        inline app::CharSet__Enum* create() {
            return il2cpp::create_object<app::CharSet__Enum>(get_class());
        }
    } // namespace CharSet__Enum
} // namespace app::classes::types
