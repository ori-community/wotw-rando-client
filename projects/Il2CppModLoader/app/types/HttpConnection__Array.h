#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpConnection__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpConnection__Array__Class** type_info;
        inline app::HttpConnection__Array__Class* get_class() {
            return il2cpp::get_class<app::HttpConnection__Array__Class>(type_info, "System.Net", "HttpConnection[]");
        }
        inline app::HttpConnection__Array* create() {
            return il2cpp::create_object<app::HttpConnection__Array>(get_class());
        }
    } // namespace HttpConnection__Array
} // namespace app::classes::types
