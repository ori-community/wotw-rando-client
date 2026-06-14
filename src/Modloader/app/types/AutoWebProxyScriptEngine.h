#pragma once
#include <Modloader/app/structs/AutoWebProxyScriptEngine.h>
#include <Modloader/app/structs/AutoWebProxyScriptEngine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoWebProxyScriptEngine {
        inline app::AutoWebProxyScriptEngine__Class** type_info() {
            static app::AutoWebProxyScriptEngine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AutoWebProxyScriptEngine__Class**)(modloader::win::memory::resolve_rva(0x04769600));
            }
            return cache;
        }
        inline app::AutoWebProxyScriptEngine__Class* get_class() {
            return il2cpp::get_class<app::AutoWebProxyScriptEngine__Class>(type_info(), "System.Net", "AutoWebProxyScriptEngine");
        }
        inline app::AutoWebProxyScriptEngine* create() {
            return il2cpp::create_object<app::AutoWebProxyScriptEngine>(get_class());
        }
    } // namespace AutoWebProxyScriptEngine
} // namespace app::classes::types
