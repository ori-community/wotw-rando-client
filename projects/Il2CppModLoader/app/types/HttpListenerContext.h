#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListenerContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpListenerContext__Class** type_info;
        inline app::HttpListenerContext__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerContext__Class>(type_info, "System.Net", "HttpListenerContext");
        }
        inline app::HttpListenerContext* create() {
            return il2cpp::create_object<app::HttpListenerContext>(get_class());
        }
        inline app::HttpListenerContext__Array* create_array(int size) {
            return il2cpp::array_new<app::HttpListenerContext__Array>(get_class(), size);
        }
        inline app::HttpListenerContext__Array* create_array(const std::vector<app::HttpListenerContext*>& items) {
            return il2cpp::array_new<app::HttpListenerContext__Array>(get_class(), items);
        }
    } // namespace HttpListenerContext
} // namespace app::classes::types
