#pragma once
#include <Modloader/app/structs/AsymmetricSignatureDeformatter.h>
#include <Modloader/app/structs/AsymmetricSignatureDeformatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsymmetricSignatureDeformatter {
        inline app::AsymmetricSignatureDeformatter__Class** type_info() {
            static app::AsymmetricSignatureDeformatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsymmetricSignatureDeformatter__Class**)(modloader::win::memory::resolve_rva(0x04760B90));
            }
            return cache;
        }
        inline app::AsymmetricSignatureDeformatter__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricSignatureDeformatter__Class>(type_info(), "System.Security.Cryptography", "AsymmetricSignatureDeformatter");
        }
        inline app::AsymmetricSignatureDeformatter* create() {
            return il2cpp::create_object<app::AsymmetricSignatureDeformatter>(get_class());
        }
    } // namespace AsymmetricSignatureDeformatter
} // namespace app::classes::types
