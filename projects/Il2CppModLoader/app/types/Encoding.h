#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Encoding {
        inline app::Encoding__Class** type_info = (app::Encoding__Class**)(modloader::win::memory::resolve_rva(0x047831A8));
        inline app::Encoding__Class* get_class() {
            return il2cpp::get_class<app::Encoding__Class>(type_info, "System.Text", "Encoding");
        }
        inline app::Encoding* create() {
            return il2cpp::create_object<app::Encoding>(get_class());
        }
        inline app::Encoding__Array* create_array(int size) {
            return il2cpp::array_new<app::Encoding__Array>(get_class(), size);
        }
        inline app::Encoding__Array* create_array(const std::vector<app::Encoding*>& items) {
            return il2cpp::array_new<app::Encoding__Array>(get_class(), items);
        }
    } // namespace Encoding
} // namespace app::classes::types
