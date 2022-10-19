#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSAPKCS1SignatureFormatter {
        inline app::RSAPKCS1SignatureFormatter__Class** type_info = (app::RSAPKCS1SignatureFormatter__Class**)(modloader::win::memory::resolve_rva(0x04727490));
        inline app::RSAPKCS1SignatureFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SignatureFormatter__Class>(type_info, "System.Security.Cryptography", "RSAPKCS1SignatureFormatter");
        }
        inline app::RSAPKCS1SignatureFormatter* create() {
            return il2cpp::create_object<app::RSAPKCS1SignatureFormatter>(get_class());
        }
    } // namespace RSAPKCS1SignatureFormatter
} // namespace app::classes::types
