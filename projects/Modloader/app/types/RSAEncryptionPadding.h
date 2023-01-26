#pragma once
#include <Modloader/app/structs/RSAEncryptionPadding.h>
#include <Modloader/app/structs/RSAEncryptionPadding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAEncryptionPadding {
        inline app::RSAEncryptionPadding__Class** type_info() {
            static app::RSAEncryptionPadding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSAEncryptionPadding__Class**)(modloader::win::memory::resolve_rva(0x0476D2A0));
            }
            return cache;
        }
        inline app::RSAEncryptionPadding__Class* get_class() {
            return il2cpp::get_class<app::RSAEncryptionPadding__Class>(type_info(), "System.Security.Cryptography", "RSAEncryptionPadding");
        }
        inline app::RSAEncryptionPadding* create() {
            return il2cpp::create_object<app::RSAEncryptionPadding>(get_class());
        }
    } // namespace RSAEncryptionPadding
} // namespace app::classes::types
