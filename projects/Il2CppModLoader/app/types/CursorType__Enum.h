#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CursorType__Enum {
        inline app::CursorType__Enum__Class** type_info = (app::CursorType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725F68));
        inline app::CursorType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CursorType__Enum__Class>(type_info, "uWintab", "CursorType");
        }
        inline app::CursorType__Enum* create() {
            return il2cpp::create_object<app::CursorType__Enum>(get_class());
        }
    } // namespace CursorType__Enum
} // namespace app::classes::types
