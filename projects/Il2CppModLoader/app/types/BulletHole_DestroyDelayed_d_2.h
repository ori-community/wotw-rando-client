#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BulletHole_DestroyDelayed_d_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BulletHole_DestroyDelayed_d_2__Class** type_info;
        inline app::BulletHole_DestroyDelayed_d_2__Class* get_class() {
            return il2cpp::get_nested_class<app::BulletHole_DestroyDelayed_d_2__Class>(type_info, "", "BulletHole", "<DestroyDelayed>d__2");
        }
        inline app::BulletHole_DestroyDelayed_d_2* create() {
            return il2cpp::create_object<app::BulletHole_DestroyDelayed_d_2>(get_class());
        }
    } // namespace BulletHole_DestroyDelayed_d_2
} // namespace app::classes::types
