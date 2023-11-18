#pragma once
#include <Modloader/app/structs/ReadState__Enum.h>
#include <Modloader/app/structs/ReadState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReadState__Enum {
        inline app::ReadState__Enum__Class** type_info() {
            static app::ReadState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReadState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReadState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReadState__Enum__Class>(type_info(), "System.Net", "ReadState");
        }
        inline app::ReadState__Enum* create() {
            return il2cpp::create_object<app::ReadState__Enum>(get_class());
        }
    } // namespace ReadState__Enum
} // namespace app::classes::types
