#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpConnection {
        inline app::HttpConnection__Class** type_info = (app::HttpConnection__Class**)(modloader::win::memory::resolve_rva(0x04754908));
        inline app::HttpConnection__Class* get_class() {
            return il2cpp::get_class<app::HttpConnection__Class>(type_info, "System.Net", "HttpConnection");
        }
        inline app::HttpConnection* create() {
            return il2cpp::create_object<app::HttpConnection>(get_class());
        }
        inline app::HttpConnection__Array* create_array(int size) {
            return il2cpp::array_new<app::HttpConnection__Array>(get_class(), size);
        }
        inline app::HttpConnection__Array* create_array(const std::vector<app::HttpConnection*>& items) {
            return il2cpp::array_new<app::HttpConnection__Array>(get_class(), items);
        }
    } // namespace HttpConnection
} // namespace app::classes::types
