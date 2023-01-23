#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProxyScriptChain__Class.h>
#include <Modloader/app/structs/ProxyScriptChain.h>

namespace app::classes::types {
    namespace ProxyScriptChain {
        inline app::ProxyScriptChain__Class** type_info = (app::ProxyScriptChain__Class**)(modloader::win::memory::resolve_rva(0x04759F88));
        inline app::ProxyScriptChain__Class* get_class() {
            return il2cpp::get_class<app::ProxyScriptChain__Class>(type_info, "System.Net", "ProxyScriptChain");
        }
        inline app::ProxyScriptChain* create() {
            return il2cpp::create_object<app::ProxyScriptChain>(get_class());
        }
    } // namespace ProxyScriptChain
} // namespace app::classes::types
