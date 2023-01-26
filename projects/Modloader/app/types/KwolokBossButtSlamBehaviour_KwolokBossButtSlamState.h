#pragma once
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_KwolokBossButtSlamState.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour_KwolokBossButtSlamState {
        inline app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class** type_info() {
            static app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState__Class>(type_info(), "", "KwolokBossButtSlamBehaviour", "KwolokBossButtSlamState");
        }
        inline app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour_KwolokBossButtSlamState>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour_KwolokBossButtSlamState
} // namespace app::classes::types
