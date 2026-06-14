#pragma once
#include <Modloader/app/structs/KwolokBossProjectileFlurryBehaviour.h>
#include <Modloader/app/structs/KwolokBossProjectileFlurryBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossProjectileFlurryBehaviour {
        inline app::KwolokBossProjectileFlurryBehaviour__Class** type_info() {
            static app::KwolokBossProjectileFlurryBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossProjectileFlurryBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossProjectileFlurryBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossProjectileFlurryBehaviour__Class>(type_info(), "", "KwolokBossProjectileFlurryBehaviour");
        }
        inline app::KwolokBossProjectileFlurryBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossProjectileFlurryBehaviour>(get_class());
        }
    } // namespace KwolokBossProjectileFlurryBehaviour
} // namespace app::classes::types
