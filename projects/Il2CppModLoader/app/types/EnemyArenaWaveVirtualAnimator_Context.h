#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaWaveVirtualAnimator_Context {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyArenaWaveVirtualAnimator_Context__Class** type_info;
        inline app::EnemyArenaWaveVirtualAnimator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyArenaWaveVirtualAnimator_Context__Class>(type_info, "", "EnemyArenaWaveVirtualAnimator", "Context");
        }
        inline app::EnemyArenaWaveVirtualAnimator_Context* create() {
            return il2cpp::create_object<app::EnemyArenaWaveVirtualAnimator_Context>(get_class());
        }
        inline app::EnemyArenaWaveVirtualAnimator_Context__Boxed* box(app::EnemyArenaWaveVirtualAnimator_Context value) {
            return il2cpp::box_value<app::EnemyArenaWaveVirtualAnimator_Context__Boxed>(get_class(), value);
        }
    } // namespace EnemyArenaWaveVirtualAnimator_Context
} // namespace app::classes::types
