#pragma once
#include <Modloader/app/structs/EnemyArenaWaveVirtualAnimator_Context.h>
#include <Modloader/app/structs/EnemyArenaWaveVirtualAnimator_Context__Boxed.h>
#include <Modloader/app/structs/EnemyArenaWaveVirtualAnimator_Context__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaWaveVirtualAnimator_Context {
        inline app::EnemyArenaWaveVirtualAnimator_Context__Class** type_info() {
            static app::EnemyArenaWaveVirtualAnimator_Context__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnemyArenaWaveVirtualAnimator_Context__Class**)(modloader::win::memory::resolve_rva(0x04712F48));
            }
            return cache;
        }
        inline app::EnemyArenaWaveVirtualAnimator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyArenaWaveVirtualAnimator_Context__Class>(type_info(), "", "EnemyArenaWaveVirtualAnimator", "Context");
        }
        inline app::EnemyArenaWaveVirtualAnimator_Context* create() {
            return il2cpp::create_object<app::EnemyArenaWaveVirtualAnimator_Context>(get_class());
        }
        inline app::EnemyArenaWaveVirtualAnimator_Context__Boxed* box(app::EnemyArenaWaveVirtualAnimator_Context value) {
            return il2cpp::box_value<app::EnemyArenaWaveVirtualAnimator_Context__Boxed>(get_class(), value);
        }
    } // namespace EnemyArenaWaveVirtualAnimator_Context
} // namespace app::classes::types
