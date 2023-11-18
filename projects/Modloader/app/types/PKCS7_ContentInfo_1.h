#pragma once
#include <Modloader/app/structs/PKCS7_ContentInfo_1.h>
#include <Modloader/app/structs/PKCS7_ContentInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS7_ContentInfo_1 {
        inline app::PKCS7_ContentInfo_1__Class** type_info() {
            static app::PKCS7_ContentInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PKCS7_ContentInfo_1__Class**)(modloader::win::memory::resolve_rva(0x04767710));
            }
            return cache;
        }
        inline app::PKCS7_ContentInfo_1__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS7_ContentInfo_1__Class>(type_info(), "Mono.Security", "PKCS7", "ContentInfo");
        }
        inline app::PKCS7_ContentInfo_1* create() {
            return il2cpp::create_object<app::PKCS7_ContentInfo_1>(get_class());
        }
    } // namespace PKCS7_ContentInfo_1
} // namespace app::classes::types
