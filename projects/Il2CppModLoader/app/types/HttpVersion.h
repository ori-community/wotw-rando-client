#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpVersion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpVersion__Class** type_info;
        inline app::HttpVersion__Class* get_class() {
            return il2cpp::get_class<app::HttpVersion__Class>(type_info, "System.Net", "HttpVersion");
        }
        inline app::HttpVersion* create() {
            return il2cpp::create_object<app::HttpVersion>(get_class());
        }
    } // namespace HttpVersion
} // namespace app::classes::types
