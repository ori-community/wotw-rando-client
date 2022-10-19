#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UTF8Encoding {
        inline app::UTF8Encoding__Class** type_info = (app::UTF8Encoding__Class**)(modloader::win::memory::resolve_rva(0x04735160));
        inline app::UTF8Encoding__Class* get_class() {
            return il2cpp::get_class<app::UTF8Encoding__Class>(type_info, "System.Text", "UTF8Encoding");
        }
        inline app::UTF8Encoding* create() {
            return il2cpp::create_object<app::UTF8Encoding>(get_class());
        }
    } // namespace UTF8Encoding
} // namespace app::classes::types
