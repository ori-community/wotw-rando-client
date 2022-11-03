#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PKCS7_EncryptedData {
        inline app::PKCS7_EncryptedData__Class** type_info = (app::PKCS7_EncryptedData__Class**)(modloader::win::memory::resolve_rva(0x04748FC0));
        inline app::PKCS7_EncryptedData__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS7_EncryptedData__Class>(type_info, "Mono.Security", "PKCS7", "EncryptedData");
        }
        inline app::PKCS7_EncryptedData* create() {
            return il2cpp::create_object<app::PKCS7_EncryptedData>(get_class());
        }
    } // namespace PKCS7_EncryptedData
} // namespace app::classes::types
