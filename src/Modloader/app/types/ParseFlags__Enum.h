#pragma once
#include <Modloader/app/structs/ParseFlags__Enum.h>
#include <Modloader/app/structs/ParseFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParseFlags__Enum {
        inline app::ParseFlags__Enum__Class** type_info() {
            static app::ParseFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParseFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParseFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParseFlags__Enum__Class>(type_info(), "System", "ParseFlags");
        }
        inline app::ParseFlags__Enum* create() {
            return il2cpp::create_object<app::ParseFlags__Enum>(get_class());
        }
    } // namespace ParseFlags__Enum
} // namespace app::classes::types
