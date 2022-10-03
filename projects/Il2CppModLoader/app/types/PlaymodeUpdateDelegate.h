#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlaymodeUpdateDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlaymodeUpdateDelegate__Class** type_info;
        inline app::PlaymodeUpdateDelegate__Class* get_class() {
            return il2cpp::get_class<app::PlaymodeUpdateDelegate__Class>(type_info, "", "PlaymodeUpdateDelegate");
        }
        inline app::PlaymodeUpdateDelegate* create() {
            return il2cpp::create_object<app::PlaymodeUpdateDelegate>(get_class());
        }
    } // namespace PlaymodeUpdateDelegate
} // namespace app::classes::types
