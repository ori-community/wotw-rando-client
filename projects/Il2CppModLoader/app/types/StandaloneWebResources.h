#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StandaloneWebResources {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StandaloneWebResources__Class** type_info;
        inline app::StandaloneWebResources__Class* get_class() {
            return il2cpp::get_class<app::StandaloneWebResources__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "StandaloneWebResources");
        }
        inline app::StandaloneWebResources* create() {
            return il2cpp::create_object<app::StandaloneWebResources>(get_class());
        }
    } // namespace StandaloneWebResources
} // namespace app::classes::types
