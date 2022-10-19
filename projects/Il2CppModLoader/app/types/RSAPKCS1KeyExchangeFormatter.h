#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSAPKCS1KeyExchangeFormatter {
        inline app::RSAPKCS1KeyExchangeFormatter__Class** type_info = (app::RSAPKCS1KeyExchangeFormatter__Class**)(modloader::win::memory::resolve_rva(0x04753238));
        inline app::RSAPKCS1KeyExchangeFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1KeyExchangeFormatter__Class>(type_info, "System.Security.Cryptography", "RSAPKCS1KeyExchangeFormatter");
        }
        inline app::RSAPKCS1KeyExchangeFormatter* create() {
            return il2cpp::create_object<app::RSAPKCS1KeyExchangeFormatter>(get_class());
        }
    } // namespace RSAPKCS1KeyExchangeFormatter
} // namespace app::classes::types
