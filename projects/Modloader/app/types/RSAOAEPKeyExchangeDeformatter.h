#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RSAOAEPKeyExchangeDeformatter__Class.h>
#include <Modloader/app/structs/RSAOAEPKeyExchangeDeformatter.h>

namespace app::classes::types {
    namespace RSAOAEPKeyExchangeDeformatter {
        inline app::RSAOAEPKeyExchangeDeformatter__Class** type_info = (app::RSAOAEPKeyExchangeDeformatter__Class**)(modloader::win::memory::resolve_rva(0x04716840));
        inline app::RSAOAEPKeyExchangeDeformatter__Class* get_class() {
            return il2cpp::get_class<app::RSAOAEPKeyExchangeDeformatter__Class>(type_info, "System.Security.Cryptography", "RSAOAEPKeyExchangeDeformatter");
        }
        inline app::RSAOAEPKeyExchangeDeformatter* create() {
            return il2cpp::create_object<app::RSAOAEPKeyExchangeDeformatter>(get_class());
        }
    } // namespace RSAOAEPKeyExchangeDeformatter
} // namespace app::classes::types
