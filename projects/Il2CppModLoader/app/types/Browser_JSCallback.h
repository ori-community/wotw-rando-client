#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Browser_JSCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Browser_JSCallback__Class** type_info;
        inline app::Browser_JSCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_JSCallback__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser", "JSCallback");
        }
        inline app::Browser_JSCallback* create() {
            return il2cpp::create_object<app::Browser_JSCallback>(get_class());
        }
    } // namespace Browser_JSCallback
} // namespace app::classes::types
