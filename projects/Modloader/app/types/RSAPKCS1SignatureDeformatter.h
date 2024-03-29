#pragma once
#include <Modloader/app/structs/RSAPKCS1SignatureDeformatter.h>
#include <Modloader/app/structs/RSAPKCS1SignatureDeformatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1SignatureDeformatter {
        inline app::RSAPKCS1SignatureDeformatter__Class** type_info() {
            static app::RSAPKCS1SignatureDeformatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSAPKCS1SignatureDeformatter__Class**)(modloader::win::memory::resolve_rva(0x04795938));
            }
            return cache;
        }
        inline app::RSAPKCS1SignatureDeformatter__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SignatureDeformatter__Class>(type_info(), "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter");
        }
        inline app::RSAPKCS1SignatureDeformatter* create() {
            return il2cpp::create_object<app::RSAPKCS1SignatureDeformatter>(get_class());
        }
    } // namespace RSAPKCS1SignatureDeformatter
} // namespace app::classes::types
