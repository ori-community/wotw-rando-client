#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Encoding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Encoding__Class** type_info;
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
