#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSAOAEPKeyExchangeFormatter {
        inline app::RSAOAEPKeyExchangeFormatter__Class** type_info = (app::RSAOAEPKeyExchangeFormatter__Class**)(modloader::win::memory::resolve_rva(0x0471F030));
        inline app::RSAOAEPKeyExchangeFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSAOAEPKeyExchangeFormatter__Class>(type_info, "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter");
        }
        inline app::RSAOAEPKeyExchangeFormatter* create() {
            return il2cpp::create_object<app::RSAOAEPKeyExchangeFormatter>(get_class());
        }
    } // namespace RSAOAEPKeyExchangeFormatter
} // namespace app::classes::types
