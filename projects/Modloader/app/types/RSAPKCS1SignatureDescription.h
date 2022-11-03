#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSAPKCS1SignatureDescription {
        namespace {
            inline app::RSAPKCS1SignatureDescription__Class* type_info_ref = nullptr;
        }
        inline app::RSAPKCS1SignatureDescription__Class** type_info = &type_info_ref;
        inline app::RSAPKCS1SignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SignatureDescription__Class>(type_info, "System.Security.Cryptography", "RSAPKCS1SignatureDescription");
        }
        inline app::RSAPKCS1SignatureDescription* create() {
            return il2cpp::create_object<app::RSAPKCS1SignatureDescription>(get_class());
        }
    } // namespace RSAPKCS1SignatureDescription
} // namespace app::classes::types
