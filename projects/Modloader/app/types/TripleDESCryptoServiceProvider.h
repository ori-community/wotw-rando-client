#pragma once
#include <Modloader/app/structs/TripleDESCryptoServiceProvider.h>
#include <Modloader/app/structs/TripleDESCryptoServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TripleDESCryptoServiceProvider {
        inline app::TripleDESCryptoServiceProvider__Class** type_info() {
            static app::TripleDESCryptoServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TripleDESCryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0471C448));
            }
            return cache;
        }
        inline app::TripleDESCryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::TripleDESCryptoServiceProvider__Class>(type_info(), "System.Security.Cryptography", "TripleDESCryptoServiceProvider");
        }
        inline app::TripleDESCryptoServiceProvider* create() {
            return il2cpp::create_object<app::TripleDESCryptoServiceProvider>(get_class());
        }
    } // namespace TripleDESCryptoServiceProvider
} // namespace app::classes::types
