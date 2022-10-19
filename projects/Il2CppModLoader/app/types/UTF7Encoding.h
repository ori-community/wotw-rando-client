#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UTF7Encoding {
        inline app::UTF7Encoding__Class** type_info = (app::UTF7Encoding__Class**)(modloader::win::memory::resolve_rva(0x047560F0));
        inline app::UTF7Encoding__Class* get_class() {
            return il2cpp::get_class<app::UTF7Encoding__Class>(type_info, "System.Text", "UTF7Encoding");
        }
        inline app::UTF7Encoding* create() {
            return il2cpp::create_object<app::UTF7Encoding>(get_class());
        }
    } // namespace UTF7Encoding
} // namespace app::classes::types
