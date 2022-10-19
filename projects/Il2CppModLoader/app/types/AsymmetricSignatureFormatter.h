#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsymmetricSignatureFormatter {
        inline app::AsymmetricSignatureFormatter__Class** type_info = (app::AsymmetricSignatureFormatter__Class**)(modloader::win::memory::resolve_rva(0x04748DB0));
        inline app::AsymmetricSignatureFormatter__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricSignatureFormatter__Class>(type_info, "System.Security.Cryptography", "AsymmetricSignatureFormatter");
        }
        inline app::AsymmetricSignatureFormatter* create() {
            return il2cpp::create_object<app::AsymmetricSignatureFormatter>(get_class());
        }
    } // namespace AsymmetricSignatureFormatter
} // namespace app::classes::types
