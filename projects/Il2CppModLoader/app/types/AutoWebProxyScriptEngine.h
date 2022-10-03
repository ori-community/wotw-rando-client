#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoWebProxyScriptEngine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AutoWebProxyScriptEngine__Class** type_info;
        inline app::AutoWebProxyScriptEngine__Class* get_class() {
            return il2cpp::get_class<app::AutoWebProxyScriptEngine__Class>(type_info, "System.Net", "AutoWebProxyScriptEngine");
        }
        inline app::AutoWebProxyScriptEngine* create() {
            return il2cpp::create_object<app::AutoWebProxyScriptEngine>(get_class());
        }
    } // namespace AutoWebProxyScriptEngine
} // namespace app::classes::types
