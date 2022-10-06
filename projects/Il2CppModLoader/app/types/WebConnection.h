#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebConnection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebConnection__Class** type_info;
        inline app::WebConnection__Class* get_class() {
            return il2cpp::get_class<app::WebConnection__Class>(type_info, "System.Net", "WebConnection");
        }
        inline app::WebConnection* create() {
            return il2cpp::create_object<app::WebConnection>(get_class());
        }
        inline app::WebConnection__Array* create_array(int size) {
            return il2cpp::array_new<app::WebConnection__Array>(get_class(), size);
        }
        inline app::WebConnection__Array* create_array(const std::vector<app::WebConnection*>& items) {
            return il2cpp::array_new<app::WebConnection__Array>(get_class(), items);
        }
    } // namespace WebConnection
} // namespace app::classes::types
