#pragma once
#include <Modloader/app/structs/KeyNumber__Enum.h>
#include <Modloader/app/structs/KeyNumber__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyNumber__Enum {
        inline app::KeyNumber__Enum__Class** type_info() {
            static app::KeyNumber__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyNumber__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyNumber__Enum__Class* get_class() {
            return il2cpp::get_class<app::KeyNumber__Enum__Class>(type_info(), "System.Security.Cryptography", "KeyNumber");
        }
        inline app::KeyNumber__Enum* create() {
            return il2cpp::create_object<app::KeyNumber__Enum>(get_class());
        }
    } // namespace KeyNumber__Enum
} // namespace app::classes::types
