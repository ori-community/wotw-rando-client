#pragma once
#include <Modloader/app/structs/DSASignatureDescription.h>
#include <Modloader/app/structs/DSASignatureDescription__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DSASignatureDescription {
        inline app::DSASignatureDescription__Class** type_info() {
            static app::DSASignatureDescription__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DSASignatureDescription__Class**)(modloader::win::memory::resolve_rva(0x047818E0));
            }
            return cache;
        }
        inline app::DSASignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::DSASignatureDescription__Class>(type_info(), "System.Security.Cryptography", "DSASignatureDescription");
        }
        inline app::DSASignatureDescription* create() {
            return il2cpp::create_object<app::DSASignatureDescription>(get_class());
        }
    } // namespace DSASignatureDescription
} // namespace app::classes::types
