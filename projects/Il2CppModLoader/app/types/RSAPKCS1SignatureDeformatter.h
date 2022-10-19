#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSAPKCS1SignatureDeformatter {
        inline app::RSAPKCS1SignatureDeformatter__Class** type_info = (app::RSAPKCS1SignatureDeformatter__Class**)(modloader::win::memory::resolve_rva(0x04795938));
        inline app::RSAPKCS1SignatureDeformatter__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SignatureDeformatter__Class>(type_info, "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter");
        }
        inline app::RSAPKCS1SignatureDeformatter* create() {
            return il2cpp::create_object<app::RSAPKCS1SignatureDeformatter>(get_class());
        }
    } // namespace RSAPKCS1SignatureDeformatter
} // namespace app::classes::types
