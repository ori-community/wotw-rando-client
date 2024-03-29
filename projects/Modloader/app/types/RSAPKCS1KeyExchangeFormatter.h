#pragma once
#include <Modloader/app/structs/RSAPKCS1KeyExchangeFormatter.h>
#include <Modloader/app/structs/RSAPKCS1KeyExchangeFormatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1KeyExchangeFormatter {
        inline app::RSAPKCS1KeyExchangeFormatter__Class** type_info() {
            static app::RSAPKCS1KeyExchangeFormatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSAPKCS1KeyExchangeFormatter__Class**)(modloader::win::memory::resolve_rva(0x04753238));
            }
            return cache;
        }
        inline app::RSAPKCS1KeyExchangeFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1KeyExchangeFormatter__Class>(type_info(), "System.Security.Cryptography", "RSAPKCS1KeyExchangeFormatter");
        }
        inline app::RSAPKCS1KeyExchangeFormatter* create() {
            return il2cpp::create_object<app::RSAPKCS1KeyExchangeFormatter>(get_class());
        }
    } // namespace RSAPKCS1KeyExchangeFormatter
} // namespace app::classes::types
