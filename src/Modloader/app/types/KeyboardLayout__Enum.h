#pragma once
#include <Modloader/app/structs/KeyboardLayout__Enum.h>
#include <Modloader/app/structs/KeyboardLayout__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyboardLayout__Enum {
        inline app::KeyboardLayout__Enum__Class** type_info() {
            static app::KeyboardLayout__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyboardLayout__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474FC08));
            }
            return cache;
        }
        inline app::KeyboardLayout__Enum__Class* get_class() {
            return il2cpp::get_class<app::KeyboardLayout__Enum__Class>(type_info(), "", "KeyboardLayout");
        }
        inline app::KeyboardLayout__Enum* create() {
            return il2cpp::create_object<app::KeyboardLayout__Enum>(get_class());
        }
    } // namespace KeyboardLayout__Enum
} // namespace app::classes::types
