#pragma once
#include <Modloader/app/structs/ProxyChain.h>
#include <Modloader/app/structs/ProxyChain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProxyChain {
        inline app::ProxyChain__Class** type_info() {
            static app::ProxyChain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProxyChain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProxyChain__Class* get_class() {
            return il2cpp::get_class<app::ProxyChain__Class>(type_info(), "System.Net", "ProxyChain");
        }
        inline app::ProxyChain* create() {
            return il2cpp::create_object<app::ProxyChain>(get_class());
        }
    } // namespace ProxyChain
} // namespace app::classes::types
