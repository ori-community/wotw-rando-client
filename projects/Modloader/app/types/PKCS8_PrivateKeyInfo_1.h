#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PKCS8_PrivateKeyInfo_1 {
        inline app::PKCS8_PrivateKeyInfo_1__Class** type_info = (app::PKCS8_PrivateKeyInfo_1__Class**)(modloader::win::memory::resolve_rva(0x0477B470));
        inline app::PKCS8_PrivateKeyInfo_1__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS8_PrivateKeyInfo_1__Class>(type_info, "Mono.Security.Cryptography", "PKCS8", "PrivateKeyInfo");
        }
        inline app::PKCS8_PrivateKeyInfo_1* create() {
            return il2cpp::create_object<app::PKCS8_PrivateKeyInfo_1>(get_class());
        }
    } // namespace PKCS8_PrivateKeyInfo_1
} // namespace app::classes::types
