#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSAEncryptionPadding {
        inline app::RSAEncryptionPadding__Class** type_info = (app::RSAEncryptionPadding__Class**)(modloader::win::memory::resolve_rva(0x0476D2A0));
        inline app::RSAEncryptionPadding__Class* get_class() {
            return il2cpp::get_class<app::RSAEncryptionPadding__Class>(type_info, "System.Security.Cryptography", "RSAEncryptionPadding");
        }
        inline app::RSAEncryptionPadding* create() {
            return il2cpp::create_object<app::RSAEncryptionPadding>(get_class());
        }
    } // namespace RSAEncryptionPadding
} // namespace app::classes::types
