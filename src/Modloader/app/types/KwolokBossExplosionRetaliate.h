#pragma once
#include <Modloader/app/structs/KwolokBossExplosionRetaliate.h>
#include <Modloader/app/structs/KwolokBossExplosionRetaliate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossExplosionRetaliate {
        inline app::KwolokBossExplosionRetaliate__Class** type_info() {
            static app::KwolokBossExplosionRetaliate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossExplosionRetaliate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossExplosionRetaliate__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossExplosionRetaliate__Class>(type_info(), "", "KwolokBossExplosionRetaliate");
        }
        inline app::KwolokBossExplosionRetaliate* create() {
            return il2cpp::create_object<app::KwolokBossExplosionRetaliate>(get_class());
        }
    } // namespace KwolokBossExplosionRetaliate
} // namespace app::classes::types
