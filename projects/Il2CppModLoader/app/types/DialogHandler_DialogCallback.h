#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DialogHandler_DialogCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DialogHandler_DialogCallback__Class** type_info;
        inline app::DialogHandler_DialogCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogHandler_DialogCallback__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DialogHandler", "DialogCallback");
        }
        inline app::DialogHandler_DialogCallback* create() {
            return il2cpp::create_object<app::DialogHandler_DialogCallback>(get_class());
        }
    } // namespace DialogHandler_DialogCallback
} // namespace app::classes::types
