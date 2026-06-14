#pragma once
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour.h>
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossWormSpitBehaviour {
        inline app::KwolokBossWormSpitBehaviour__Class** type_info() {
            static app::KwolokBossWormSpitBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossWormSpitBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossWormSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossWormSpitBehaviour__Class>(type_info(), "", "KwolokBossWormSpitBehaviour");
        }
        inline app::KwolokBossWormSpitBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossWormSpitBehaviour>(get_class());
        }
    } // namespace KwolokBossWormSpitBehaviour
} // namespace app::classes::types
