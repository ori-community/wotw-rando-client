#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProxyChain {
        namespace {
            app::ProxyChain__Class* type_info_ref = nullptr;
        }
        app::ProxyChain__Class** type_info = &type_info_ref;
        inline app::ProxyChain__Class* get_class() {
            return il2cpp::get_class<app::ProxyChain__Class>(type_info, "System.Net", "ProxyChain");
        }
        inline app::ProxyChain* create() {
            return il2cpp::create_object<app::ProxyChain>(get_class());
        }
    } // namespace ProxyChain
} // namespace app::classes::types
