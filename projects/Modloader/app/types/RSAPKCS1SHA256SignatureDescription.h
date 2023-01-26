#pragma once
#include <Modloader/app/structs/RSAPKCS1SHA256SignatureDescription.h>
#include <Modloader/app/structs/RSAPKCS1SHA256SignatureDescription__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1SHA256SignatureDescription {
        inline app::RSAPKCS1SHA256SignatureDescription__Class** type_info() {
            static app::RSAPKCS1SHA256SignatureDescription__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSAPKCS1SHA256SignatureDescription__Class**)(modloader::win::memory::resolve_rva(0x04775BA8));
            }
            return cache;
        }
        inline app::RSAPKCS1SHA256SignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SHA256SignatureDescription__Class>(type_info(), "System.Security.Cryptography", "RSAPKCS1SHA256SignatureDescription");
        }
        inline app::RSAPKCS1SHA256SignatureDescription* create() {
            return il2cpp::create_object<app::RSAPKCS1SHA256SignatureDescription>(get_class());
        }
    } // namespace RSAPKCS1SHA256SignatureDescription
} // namespace app::classes::types
