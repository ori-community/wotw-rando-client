#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DSASignatureDescription {
        inline app::DSASignatureDescription__Class** type_info = (app::DSASignatureDescription__Class**)(modloader::win::memory::resolve_rva(0x047818E0));
        inline app::DSASignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::DSASignatureDescription__Class>(type_info, "System.Security.Cryptography", "DSASignatureDescription");
        }
        inline app::DSASignatureDescription* create() {
            return il2cpp::create_object<app::DSASignatureDescription>(get_class());
        }
    } // namespace DSASignatureDescription
} // namespace app::classes::types
