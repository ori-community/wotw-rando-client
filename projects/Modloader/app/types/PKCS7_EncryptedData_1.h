#pragma once
#include <Modloader/app/structs/PKCS7_EncryptedData_1.h>
#include <Modloader/app/structs/PKCS7_EncryptedData_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS7_EncryptedData_1 {
        inline app::PKCS7_EncryptedData_1__Class** type_info() {
            static app::PKCS7_EncryptedData_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PKCS7_EncryptedData_1__Class**)(modloader::win::memory::resolve_rva(0x04735850));
            }
            return cache;
        }
        inline app::PKCS7_EncryptedData_1__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS7_EncryptedData_1__Class>(type_info(), "Mono.Security", "PKCS7", "EncryptedData");
        }
        inline app::PKCS7_EncryptedData_1* create() {
            return il2cpp::create_object<app::PKCS7_EncryptedData_1>(get_class());
        }
    } // namespace PKCS7_EncryptedData_1
} // namespace app::classes::types
