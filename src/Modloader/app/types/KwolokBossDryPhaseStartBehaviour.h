#pragma once
#include <Modloader/app/structs/KwolokBossDryPhaseStartBehaviour.h>
#include <Modloader/app/structs/KwolokBossDryPhaseStartBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossDryPhaseStartBehaviour {
        inline app::KwolokBossDryPhaseStartBehaviour__Class** type_info() {
            static app::KwolokBossDryPhaseStartBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossDryPhaseStartBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossDryPhaseStartBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossDryPhaseStartBehaviour__Class>(type_info(), "", "KwolokBossDryPhaseStartBehaviour");
        }
        inline app::KwolokBossDryPhaseStartBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossDryPhaseStartBehaviour>(get_class());
        }
    } // namespace KwolokBossDryPhaseStartBehaviour
} // namespace app::classes::types
