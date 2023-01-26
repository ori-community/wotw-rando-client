#pragma once
#include <Modloader/app/structs/KwolokBossTauntBehaviour.h>
#include <Modloader/app/structs/KwolokBossTauntBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTauntBehaviour {
        inline app::KwolokBossTauntBehaviour__Class** type_info() {
            static app::KwolokBossTauntBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossTauntBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossTauntBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTauntBehaviour__Class>(type_info(), "", "KwolokBossTauntBehaviour");
        }
        inline app::KwolokBossTauntBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossTauntBehaviour>(get_class());
        }
    } // namespace KwolokBossTauntBehaviour
} // namespace app::classes::types
