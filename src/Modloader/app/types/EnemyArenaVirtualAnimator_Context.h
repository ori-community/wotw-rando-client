#pragma once
#include <Modloader/app/structs/EnemyArenaVirtualAnimator_Context.h>
#include <Modloader/app/structs/EnemyArenaVirtualAnimator_Context__Boxed.h>
#include <Modloader/app/structs/EnemyArenaVirtualAnimator_Context__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaVirtualAnimator_Context {
        inline app::EnemyArenaVirtualAnimator_Context__Class** type_info() {
            static app::EnemyArenaVirtualAnimator_Context__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnemyArenaVirtualAnimator_Context__Class**)(modloader::win::memory::resolve_rva(0x047199A0));
            }
            return cache;
        }
        inline app::EnemyArenaVirtualAnimator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyArenaVirtualAnimator_Context__Class>(type_info(), "", "EnemyArenaVirtualAnimator", "Context");
        }
        inline app::EnemyArenaVirtualAnimator_Context* create() {
            return il2cpp::create_object<app::EnemyArenaVirtualAnimator_Context>(get_class());
        }
        inline app::EnemyArenaVirtualAnimator_Context__Boxed* box(app::EnemyArenaVirtualAnimator_Context value) {
            return il2cpp::box_value<app::EnemyArenaVirtualAnimator_Context__Boxed>(get_class(), value);
        }
    } // namespace EnemyArenaVirtualAnimator_Context
} // namespace app::classes::types
