#pragma once
#include <Modloader/app/structs/RSAPKCS1SHA1SignatureDescription.h>
#include <Modloader/app/structs/RSAPKCS1SHA1SignatureDescription__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1SHA1SignatureDescription {
        inline app::RSAPKCS1SHA1SignatureDescription__Class** type_info() {
            static app::RSAPKCS1SHA1SignatureDescription__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSAPKCS1SHA1SignatureDescription__Class**)(modloader::win::memory::resolve_rva(0x0470E438));
            }
            return cache;
        }
        inline app::RSAPKCS1SHA1SignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SHA1SignatureDescription__Class>(type_info(), "System.Security.Cryptography", "RSAPKCS1SHA1SignatureDescription");
        }
        inline app::RSAPKCS1SHA1SignatureDescription* create() {
            return il2cpp::create_object<app::RSAPKCS1SHA1SignatureDescription>(get_class());
        }
    } // namespace RSAPKCS1SHA1SignatureDescription
} // namespace app::classes::types
