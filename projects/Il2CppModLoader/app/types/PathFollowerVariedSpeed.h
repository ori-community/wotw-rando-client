#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PathFollowerVariedSpeed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PathFollowerVariedSpeed__Class** type_info;
        inline app::PathFollowerVariedSpeed__Class* get_class() {
            return il2cpp::get_class<app::PathFollowerVariedSpeed__Class>(type_info, "", "PathFollowerVariedSpeed");
        }
        inline app::PathFollowerVariedSpeed* create() {
            return il2cpp::create_object<app::PathFollowerVariedSpeed>(get_class());
        }
    } // namespace PathFollowerVariedSpeed
} // namespace app::classes::types
