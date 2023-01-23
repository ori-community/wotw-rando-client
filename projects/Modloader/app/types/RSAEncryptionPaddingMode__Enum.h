#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RSAEncryptionPaddingMode__Enum__Class.h>
#include <Modloader/app/structs/RSAEncryptionPaddingMode__Enum.h>

namespace app::classes::types {
    namespace RSAEncryptionPaddingMode__Enum {
        inline app::RSAEncryptionPaddingMode__Enum__Class** type_info = (app::RSAEncryptionPaddingMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047989B8));
        inline app::RSAEncryptionPaddingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::RSAEncryptionPaddingMode__Enum__Class>(type_info, "System.Security.Cryptography", "RSAEncryptionPaddingMode");
        }
        inline app::RSAEncryptionPaddingMode__Enum* create() {
            return il2cpp::create_object<app::RSAEncryptionPaddingMode__Enum>(get_class());
        }
    } // namespace RSAEncryptionPaddingMode__Enum
} // namespace app::classes::types
