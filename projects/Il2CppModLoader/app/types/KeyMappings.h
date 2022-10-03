#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyMappings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyMappings__Class** type_info;
        inline app::KeyMappings__Class* get_class() {
            return il2cpp::get_class<app::KeyMappings__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "KeyMappings");
        }
        inline app::KeyMappings* create() {
            return il2cpp::create_object<app::KeyMappings>(get_class());
        }
    } // namespace KeyMappings
} // namespace app::classes::types
