#pragma once
#include <Modloader/app/structs/RSAPKCS1KeyExchangeDeformatter.h>
#include <Modloader/app/structs/RSAPKCS1KeyExchangeDeformatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1KeyExchangeDeformatter {
        inline app::RSAPKCS1KeyExchangeDeformatter__Class** type_info() {
            static app::RSAPKCS1KeyExchangeDeformatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSAPKCS1KeyExchangeDeformatter__Class**)(modloader::win::memory::resolve_rva(0x0472EBA0));
            }
            return cache;
        }
        inline app::RSAPKCS1KeyExchangeDeformatter__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1KeyExchangeDeformatter__Class>(type_info(), "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter");
        }
        inline app::RSAPKCS1KeyExchangeDeformatter* create() {
            return il2cpp::create_object<app::RSAPKCS1KeyExchangeDeformatter>(get_class());
        }
    } // namespace RSAPKCS1KeyExchangeDeformatter
} // namespace app::classes::types
