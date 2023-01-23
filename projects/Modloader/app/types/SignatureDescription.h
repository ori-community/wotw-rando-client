#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SignatureDescription__Class.h>
#include <Modloader/app/structs/SignatureDescription.h>

namespace app::classes::types {
    namespace SignatureDescription {
        namespace {
            inline app::SignatureDescription__Class* type_info_ref = nullptr;
        }
        inline app::SignatureDescription__Class** type_info = &type_info_ref;
        inline app::SignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::SignatureDescription__Class>(type_info, "System.Security.Cryptography", "SignatureDescription");
        }
        inline app::SignatureDescription* create() {
            return il2cpp::create_object<app::SignatureDescription>(get_class());
        }
    } // namespace SignatureDescription
} // namespace app::classes::types
