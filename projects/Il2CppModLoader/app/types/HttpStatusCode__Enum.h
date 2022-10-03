#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpStatusCode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpStatusCode__Enum__Class** type_info;
        inline app::HttpStatusCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpStatusCode__Enum__Class>(type_info, "System.Net", "HttpStatusCode");
        }
        inline app::HttpStatusCode__Enum* create() {
            return il2cpp::create_object<app::HttpStatusCode__Enum>(get_class());
        }
    } // namespace HttpStatusCode__Enum
} // namespace app::classes::types
