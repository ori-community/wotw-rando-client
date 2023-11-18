#pragma once
#include <Modloader/app/structs/KwolokBossUnderwaterPullBehaviour.h>
#include <Modloader/app/structs/KwolokBossUnderwaterPullBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossUnderwaterPullBehaviour {
        inline app::KwolokBossUnderwaterPullBehaviour__Class** type_info() {
            static app::KwolokBossUnderwaterPullBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossUnderwaterPullBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossUnderwaterPullBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossUnderwaterPullBehaviour__Class>(type_info(), "", "KwolokBossUnderwaterPullBehaviour");
        }
        inline app::KwolokBossUnderwaterPullBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossUnderwaterPullBehaviour>(get_class());
        }
    } // namespace KwolokBossUnderwaterPullBehaviour
} // namespace app::classes::types
