#pragma once
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour {
        inline app::KwolokBossButtSlamBehaviour__Class** type_info() {
            static app::KwolokBossButtSlamBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossButtSlamBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossButtSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossButtSlamBehaviour__Class>(type_info(), "", "KwolokBossButtSlamBehaviour");
        }
        inline app::KwolokBossButtSlamBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour
} // namespace app::classes::types
