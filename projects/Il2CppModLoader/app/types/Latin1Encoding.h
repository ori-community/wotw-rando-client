#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Latin1Encoding {
        inline app::Latin1Encoding__Class** type_info = (app::Latin1Encoding__Class**)(modloader::win::memory::resolve_rva(0x0474E8C8));
        inline app::Latin1Encoding__Class* get_class() {
            return il2cpp::get_class<app::Latin1Encoding__Class>(type_info, "System.Text", "Latin1Encoding");
        }
        inline app::Latin1Encoding* create() {
            return il2cpp::create_object<app::Latin1Encoding>(get_class());
        }
    } // namespace Latin1Encoding
} // namespace app::classes::types
