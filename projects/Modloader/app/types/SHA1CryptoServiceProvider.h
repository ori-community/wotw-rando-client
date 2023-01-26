#pragma once
#include <Modloader/app/structs/SHA1CryptoServiceProvider.h>
#include <Modloader/app/structs/SHA1CryptoServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SHA1CryptoServiceProvider {
        inline app::SHA1CryptoServiceProvider__Class** type_info() {
            static app::SHA1CryptoServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SHA1CryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0470A918));
            }
            return cache;
        }
        inline app::SHA1CryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::SHA1CryptoServiceProvider__Class>(type_info(), "System.Security.Cryptography", "SHA1CryptoServiceProvider");
        }
        inline app::SHA1CryptoServiceProvider* create() {
            return il2cpp::create_object<app::SHA1CryptoServiceProvider>(get_class());
        }
    } // namespace SHA1CryptoServiceProvider
} // namespace app::classes::types
