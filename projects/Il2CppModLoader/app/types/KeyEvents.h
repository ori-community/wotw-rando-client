#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyEvents {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyEvents__Class** type_info;
        inline app::KeyEvents__Class* get_class() {
            return il2cpp::get_class<app::KeyEvents__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "KeyEvents");
        }
        inline app::KeyEvents* create() {
            return il2cpp::create_object<app::KeyEvents>(get_class());
        }
    } // namespace KeyEvents
} // namespace app::classes::types
