#pragma once
#include <Modloader/app/structs/MD5CryptoServiceProvider.h>
#include <Modloader/app/structs/MD5CryptoServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MD5CryptoServiceProvider {
        inline app::MD5CryptoServiceProvider__Class** type_info() {
            static app::MD5CryptoServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MD5CryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0474AD20));
            }
            return cache;
        }
        inline app::MD5CryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::MD5CryptoServiceProvider__Class>(type_info(), "System.Security.Cryptography", "MD5CryptoServiceProvider");
        }
        inline app::MD5CryptoServiceProvider* create() {
            return il2cpp::create_object<app::MD5CryptoServiceProvider>(get_class());
        }
    } // namespace MD5CryptoServiceProvider
} // namespace app::classes::types
