#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS7_ContentInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PKCS7_ContentInfo__Class** type_info;
        inline app::PKCS7_ContentInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS7_ContentInfo__Class>(type_info, "Mono.Security", "PKCS7", "ContentInfo");
        }
        inline app::PKCS7_ContentInfo* create() {
            return il2cpp::create_object<app::PKCS7_ContentInfo>(get_class());
        }
    } // namespace PKCS7_ContentInfo
} // namespace app::classes::types
