#pragma once
#include <Modloader/app/structs/RSAOAEPKeyExchangeFormatter.h>
#include <Modloader/app/structs/RSAOAEPKeyExchangeFormatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAOAEPKeyExchangeFormatter {
        inline app::RSAOAEPKeyExchangeFormatter__Class** type_info() {
            static app::RSAOAEPKeyExchangeFormatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSAOAEPKeyExchangeFormatter__Class**)(modloader::win::memory::resolve_rva(0x0471F030));
            }
            return cache;
        }
        inline app::RSAOAEPKeyExchangeFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSAOAEPKeyExchangeFormatter__Class>(type_info(), "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter");
        }
        inline app::RSAOAEPKeyExchangeFormatter* create() {
            return il2cpp::create_object<app::RSAOAEPKeyExchangeFormatter>(get_class());
        }
    } // namespace RSAOAEPKeyExchangeFormatter
} // namespace app::classes::types
