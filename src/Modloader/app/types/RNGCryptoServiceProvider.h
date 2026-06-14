#pragma once
#include <Modloader/app/structs/RNGCryptoServiceProvider.h>
#include <Modloader/app/structs/RNGCryptoServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RNGCryptoServiceProvider {
        inline app::RNGCryptoServiceProvider__Class** type_info() {
            static app::RNGCryptoServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RNGCryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04713368));
            }
            return cache;
        }
        inline app::RNGCryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::RNGCryptoServiceProvider__Class>(type_info(), "System.Security.Cryptography", "RNGCryptoServiceProvider");
        }
        inline app::RNGCryptoServiceProvider* create() {
            return il2cpp::create_object<app::RNGCryptoServiceProvider>(get_class());
        }
    } // namespace RNGCryptoServiceProvider
} // namespace app::classes::types
