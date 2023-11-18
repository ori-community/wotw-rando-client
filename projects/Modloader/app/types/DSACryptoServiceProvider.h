#pragma once
#include <Modloader/app/structs/DSACryptoServiceProvider.h>
#include <Modloader/app/structs/DSACryptoServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DSACryptoServiceProvider {
        inline app::DSACryptoServiceProvider__Class** type_info() {
            static app::DSACryptoServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DSACryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x047117D0));
            }
            return cache;
        }
        inline app::DSACryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::DSACryptoServiceProvider__Class>(type_info(), "System.Security.Cryptography", "DSACryptoServiceProvider");
        }
        inline app::DSACryptoServiceProvider* create() {
            return il2cpp::create_object<app::DSACryptoServiceProvider>(get_class());
        }
    } // namespace DSACryptoServiceProvider
} // namespace app::classes::types
