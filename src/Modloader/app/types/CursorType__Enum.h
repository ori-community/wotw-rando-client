#pragma once
#include <Modloader/app/structs/CursorType__Enum.h>
#include <Modloader/app/structs/CursorType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CursorType__Enum {
        inline app::CursorType__Enum__Class** type_info() {
            static app::CursorType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CursorType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725F68));
            }
            return cache;
        }
        inline app::CursorType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CursorType__Enum__Class>(type_info(), "uWintab", "CursorType");
        }
        inline app::CursorType__Enum* create() {
            return il2cpp::create_object<app::CursorType__Enum>(get_class());
        }
    } // namespace CursorType__Enum
} // namespace app::classes::types
