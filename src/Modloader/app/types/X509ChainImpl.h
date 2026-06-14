#pragma once
#include <Modloader/app/structs/X509ChainImpl.h>
#include <Modloader/app/structs/X509ChainImpl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509ChainImpl {
        inline app::X509ChainImpl__Class** type_info() {
            static app::X509ChainImpl__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::X509ChainImpl__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::X509ChainImpl__Class* get_class() {
            return il2cpp::get_class<app::X509ChainImpl__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509ChainImpl");
        }
        inline app::X509ChainImpl* create() {
            return il2cpp::create_object<app::X509ChainImpl>(get_class());
        }
    } // namespace X509ChainImpl
} // namespace app::classes::types
