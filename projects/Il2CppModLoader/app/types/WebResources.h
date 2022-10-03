#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebResources {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebResources__Class** type_info;
        inline app::WebResources__Class* get_class() {
            return il2cpp::get_class<app::WebResources__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "WebResources");
        }
        inline app::WebResources* create() {
            return il2cpp::create_object<app::WebResources>(get_class());
        }
    } // namespace WebResources
} // namespace app::classes::types
