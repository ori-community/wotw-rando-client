#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPAddress {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPAddress__Class** type_info;
        inline app::IPAddress__Class* get_class() {
            return il2cpp::get_class<app::IPAddress__Class>(type_info, "System.Net", "IPAddress");
        }
        inline app::IPAddress* create() {
            return il2cpp::create_object<app::IPAddress>(get_class());
        }
        inline app::IPAddress__Array* create_array(int size) {
            return il2cpp::array_new<app::IPAddress__Array>(get_class(), size);
        }
        inline app::IPAddress__Array* create_array(const std::vector<app::IPAddress*>& items) {
            return il2cpp::array_new<app::IPAddress__Array>(get_class(), items);
        }
    } // namespace IPAddress
} // namespace app::classes::types
