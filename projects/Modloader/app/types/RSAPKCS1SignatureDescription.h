#pragma once
#include <Modloader/app/structs/RSAPKCS1SignatureDescription.h>
#include <Modloader/app/structs/RSAPKCS1SignatureDescription__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1SignatureDescription {
        inline app::RSAPKCS1SignatureDescription__Class** type_info() {
            static app::RSAPKCS1SignatureDescription__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RSAPKCS1SignatureDescription__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RSAPKCS1SignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SignatureDescription__Class>(type_info(), "System.Security.Cryptography", "RSAPKCS1SignatureDescription");
        }
        inline app::RSAPKCS1SignatureDescription* create() {
            return il2cpp::create_object<app::RSAPKCS1SignatureDescription>(get_class());
        }
    } // namespace RSAPKCS1SignatureDescription
} // namespace app::classes::types
