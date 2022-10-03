#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS7_ContentInfo_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PKCS7_ContentInfo_1__Class** type_info;
        inline app::PKCS7_ContentInfo_1__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS7_ContentInfo_1__Class>(type_info, "Mono.Security", "PKCS7", "ContentInfo");
        }
        inline app::PKCS7_ContentInfo_1* create() {
            return il2cpp::create_object<app::PKCS7_ContentInfo_1>(get_class());
        }
    } // namespace PKCS7_ContentInfo_1
} // namespace app::classes::types
