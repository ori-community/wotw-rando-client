#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509ChainImpl {
        namespace {
            app::X509ChainImpl__Class* type_info_ref = nullptr;
        }
        app::X509ChainImpl__Class** type_info = &type_info_ref;
        inline app::X509ChainImpl__Class* get_class() {
            return il2cpp::get_class<app::X509ChainImpl__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainImpl");
        }
        inline app::X509ChainImpl* create() {
            return il2cpp::create_object<app::X509ChainImpl>(get_class());
        }
    } // namespace X509ChainImpl
} // namespace app::classes::types
