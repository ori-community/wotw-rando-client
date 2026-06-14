#pragma once
#include <Modloader/app/structs/RSACryptoServiceProvider.h>
#include <Modloader/app/structs/RSACryptoServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSACryptoServiceProvider {
        inline app::RSACryptoServiceProvider__Class** type_info() {
            static app::RSACryptoServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSACryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x047547C0));
            }
            return cache;
        }
        inline app::RSACryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::RSACryptoServiceProvider__Class>(type_info(), "System.Security.Cryptography", "RSACryptoServiceProvider");
        }
        inline app::RSACryptoServiceProvider* create() {
            return il2cpp::create_object<app::RSACryptoServiceProvider>(get_class());
        }
    } // namespace RSACryptoServiceProvider
} // namespace app::classes::types
