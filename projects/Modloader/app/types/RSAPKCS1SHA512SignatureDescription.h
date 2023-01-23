#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RSAPKCS1SHA512SignatureDescription__Class.h>
#include <Modloader/app/structs/RSAPKCS1SHA512SignatureDescription.h>

namespace app::classes::types {
    namespace RSAPKCS1SHA512SignatureDescription {
        inline app::RSAPKCS1SHA512SignatureDescription__Class** type_info = (app::RSAPKCS1SHA512SignatureDescription__Class**)(modloader::win::memory::resolve_rva(0x04715718));
        inline app::RSAPKCS1SHA512SignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SHA512SignatureDescription__Class>(type_info, "System.Security.Cryptography", "RSAPKCS1SHA512SignatureDescription");
        }
        inline app::RSAPKCS1SHA512SignatureDescription* create() {
            return il2cpp::create_object<app::RSAPKCS1SHA512SignatureDescription>(get_class());
        }
    } // namespace RSAPKCS1SHA512SignatureDescription
} // namespace app::classes::types
