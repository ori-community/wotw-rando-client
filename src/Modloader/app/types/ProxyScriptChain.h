#pragma once
#include <Modloader/app/structs/ProxyScriptChain.h>
#include <Modloader/app/structs/ProxyScriptChain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProxyScriptChain {
        inline app::ProxyScriptChain__Class** type_info() {
            static app::ProxyScriptChain__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProxyScriptChain__Class**)(modloader::win::memory::resolve_rva(0x04759F88));
            }
            return cache;
        }
        inline app::ProxyScriptChain__Class* get_class() {
            return il2cpp::get_class<app::ProxyScriptChain__Class>(type_info(), "System.Net", "ProxyScriptChain");
        }
        inline app::ProxyScriptChain* create() {
            return il2cpp::create_object<app::ProxyScriptChain>(get_class());
        }
    } // namespace ProxyScriptChain
} // namespace app::classes::types
