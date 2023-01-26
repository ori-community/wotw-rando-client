#pragma once
#include <Modloader/app/structs/RC2CryptoServiceProvider.h>
#include <Modloader/app/structs/RC2CryptoServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RC2CryptoServiceProvider {
        inline app::RC2CryptoServiceProvider__Class** type_info() {
            static app::RC2CryptoServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RC2CryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04762F78));
            }
            return cache;
        }
        inline app::RC2CryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::RC2CryptoServiceProvider__Class>(type_info(), "System.Security.Cryptography", "RC2CryptoServiceProvider");
        }
        inline app::RC2CryptoServiceProvider* create() {
            return il2cpp::create_object<app::RC2CryptoServiceProvider>(get_class());
        }
    } // namespace RC2CryptoServiceProvider
} // namespace app::classes::types
