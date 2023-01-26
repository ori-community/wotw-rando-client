#pragma once
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour.h>
#include <Modloader/app/structs/KwolokBossTendrilStrikeBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour {
        inline app::KwolokBossTendrilStrikeBehaviour__Class** type_info() {
            static app::KwolokBossTendrilStrikeBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossTendrilStrikeBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossTendrilStrikeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTendrilStrikeBehaviour__Class>(type_info(), "", "KwolokBossTendrilStrikeBehaviour");
        }
        inline app::KwolokBossTendrilStrikeBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour
} // namespace app::classes::types
