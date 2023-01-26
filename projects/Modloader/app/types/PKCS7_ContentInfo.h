#pragma once
#include <Modloader/app/structs/PKCS7_ContentInfo.h>
#include <Modloader/app/structs/PKCS7_ContentInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS7_ContentInfo {
        inline app::PKCS7_ContentInfo__Class** type_info() {
            static app::PKCS7_ContentInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PKCS7_ContentInfo__Class**)(modloader::win::memory::resolve_rva(0x04714C68));
            }
            return cache;
        }
        inline app::PKCS7_ContentInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS7_ContentInfo__Class>(type_info(), "Mono.Security", "PKCS7", "ContentInfo");
        }
        inline app::PKCS7_ContentInfo* create() {
            return il2cpp::create_object<app::PKCS7_ContentInfo>(get_class());
        }
    } // namespace PKCS7_ContentInfo
} // namespace app::classes::types
