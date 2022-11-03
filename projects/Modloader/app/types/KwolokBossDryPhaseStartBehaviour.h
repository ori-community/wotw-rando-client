#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossDryPhaseStartBehaviour {
        namespace {
            inline app::KwolokBossDryPhaseStartBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossDryPhaseStartBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossDryPhaseStartBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossDryPhaseStartBehaviour__Class>(type_info, "", "KwolokBossDryPhaseStartBehaviour");
        }
        inline app::KwolokBossDryPhaseStartBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossDryPhaseStartBehaviour>(get_class());
        }
    } // namespace KwolokBossDryPhaseStartBehaviour
} // namespace app::classes::types
