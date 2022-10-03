#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DialogHandler_MenuCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DialogHandler_MenuCallback__Class** type_info;
        inline app::DialogHandler_MenuCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogHandler_MenuCallback__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DialogHandler", "MenuCallback");
        }
        inline app::DialogHandler_MenuCallback* create() {
            return il2cpp::create_object<app::DialogHandler_MenuCallback>(get_class());
        }
    } // namespace DialogHandler_MenuCallback
} // namespace app::classes::types
