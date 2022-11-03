#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PKCS7_ContentInfo {
        inline app::PKCS7_ContentInfo__Class** type_info = (app::PKCS7_ContentInfo__Class**)(modloader::win::memory::resolve_rva(0x04714C68));
        inline app::PKCS7_ContentInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS7_ContentInfo__Class>(type_info, "Mono.Security", "PKCS7", "ContentInfo");
        }
        inline app::PKCS7_ContentInfo* create() {
            return il2cpp::create_object<app::PKCS7_ContentInfo>(get_class());
        }
    } // namespace PKCS7_ContentInfo
} // namespace app::classes::types
