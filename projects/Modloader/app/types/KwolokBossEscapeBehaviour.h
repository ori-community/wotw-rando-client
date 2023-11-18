#pragma once
#include <Modloader/app/structs/KwolokBossEscapeBehaviour.h>
#include <Modloader/app/structs/KwolokBossEscapeBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEscapeBehaviour {
        inline app::KwolokBossEscapeBehaviour__Class** type_info() {
            static app::KwolokBossEscapeBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossEscapeBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossEscapeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossEscapeBehaviour__Class>(type_info(), "", "KwolokBossEscapeBehaviour");
        }
        inline app::KwolokBossEscapeBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossEscapeBehaviour>(get_class());
        }
    } // namespace KwolokBossEscapeBehaviour
} // namespace app::classes::types
