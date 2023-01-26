#pragma once
#include <Modloader/app/structs/KwolokBossSludgeLaserBehaviour.h>
#include <Modloader/app/structs/KwolokBossSludgeLaserBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossSludgeLaserBehaviour {
        inline app::KwolokBossSludgeLaserBehaviour__Class** type_info() {
            static app::KwolokBossSludgeLaserBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossSludgeLaserBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossSludgeLaserBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossSludgeLaserBehaviour__Class>(type_info(), "", "KwolokBossSludgeLaserBehaviour");
        }
        inline app::KwolokBossSludgeLaserBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossSludgeLaserBehaviour>(get_class());
        }
    } // namespace KwolokBossSludgeLaserBehaviour
} // namespace app::classes::types
