#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebRequestUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebRequestUtils__Class** type_info;
        inline app::WebRequestUtils__Class* get_class() {
            return il2cpp::get_class<app::WebRequestUtils__Class>(type_info, "UnityEngineInternal", "WebRequestUtils");
        }
        inline app::WebRequestUtils* create() {
            return il2cpp::create_object<app::WebRequestUtils>(get_class());
        }
    } // namespace WebRequestUtils
} // namespace app::classes::types
