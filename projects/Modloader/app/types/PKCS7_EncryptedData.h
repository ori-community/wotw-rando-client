#pragma once
#include <Modloader/app/structs/PKCS7_EncryptedData.h>
#include <Modloader/app/structs/PKCS7_EncryptedData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS7_EncryptedData {
        inline app::PKCS7_EncryptedData__Class** type_info() {
            static app::PKCS7_EncryptedData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PKCS7_EncryptedData__Class**)(modloader::win::memory::resolve_rva(0x04748FC0));
            }
            return cache;
        }
        inline app::PKCS7_EncryptedData__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS7_EncryptedData__Class>(type_info(), "Mono.Security", "PKCS7", "EncryptedData");
        }
        inline app::PKCS7_EncryptedData* create() {
            return il2cpp::create_object<app::PKCS7_EncryptedData>(get_class());
        }
    } // namespace PKCS7_EncryptedData
} // namespace app::classes::types
