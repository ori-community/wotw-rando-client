#pragma once
#include <Modloader/app/structs/SignatureDescription.h>
#include <Modloader/app/structs/SignatureDescription__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SignatureDescription {
        inline app::SignatureDescription__Class** type_info() {
            static app::SignatureDescription__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SignatureDescription__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::SignatureDescription__Class>(type_info(), "System.Security.Cryptography", "SignatureDescription");
        }
        inline app::SignatureDescription* create() {
            return il2cpp::create_object<app::SignatureDescription>(get_class());
        }
    } // namespace SignatureDescription
} // namespace app::classes::types
