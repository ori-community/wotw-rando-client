#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JavaScriptUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JavaScriptUtils__Class** type_info;
        inline app::JavaScriptUtils__Class* get_class() {
            return il2cpp::get_class<app::JavaScriptUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "JavaScriptUtils");
        }
        inline app::JavaScriptUtils* create() {
            return il2cpp::create_object<app::JavaScriptUtils>(get_class());
        }
    } // namespace JavaScriptUtils
} // namespace app::classes::types
