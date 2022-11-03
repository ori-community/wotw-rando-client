#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSACryptoServiceProvider {
        inline app::RSACryptoServiceProvider__Class** type_info = (app::RSACryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x047547C0));
        inline app::RSACryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::RSACryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "RSACryptoServiceProvider");
        }
        inline app::RSACryptoServiceProvider* create() {
            return il2cpp::create_object<app::RSACryptoServiceProvider>(get_class());
        }
    } // namespace RSACryptoServiceProvider
} // namespace app::classes::types
