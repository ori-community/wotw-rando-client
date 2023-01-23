#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DESCryptoServiceProvider__Class.h>
#include <Modloader/app/structs/DESCryptoServiceProvider.h>

namespace app::classes::types {
    namespace DESCryptoServiceProvider {
        inline app::DESCryptoServiceProvider__Class** type_info = (app::DESCryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04754278));
        inline app::DESCryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::DESCryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "DESCryptoServiceProvider");
        }
        inline app::DESCryptoServiceProvider* create() {
            return il2cpp::create_object<app::DESCryptoServiceProvider>(get_class());
        }
    } // namespace DESCryptoServiceProvider
} // namespace app::classes::types
