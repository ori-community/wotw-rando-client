#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserAgent__Class** type_info;
        inline app::UserAgent__Class* get_class() {
            return il2cpp::get_class<app::UserAgent__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "UserAgent");
        }
        inline app::UserAgent* create() {
            return il2cpp::create_object<app::UserAgent>(get_class());
        }
    } // namespace UserAgent
} // namespace app::classes::types
