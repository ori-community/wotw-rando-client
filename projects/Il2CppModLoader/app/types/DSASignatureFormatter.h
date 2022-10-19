#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DSASignatureFormatter {
        inline app::DSASignatureFormatter__Class** type_info = (app::DSASignatureFormatter__Class**)(modloader::win::memory::resolve_rva(0x04770C68));
        inline app::DSASignatureFormatter__Class* get_class() {
            return il2cpp::get_class<app::DSASignatureFormatter__Class>(type_info, "System.Security.Cryptography", "DSASignatureFormatter");
        }
        inline app::DSASignatureFormatter* create() {
            return il2cpp::create_object<app::DSASignatureFormatter>(get_class());
        }
    } // namespace DSASignatureFormatter
} // namespace app::classes::types
