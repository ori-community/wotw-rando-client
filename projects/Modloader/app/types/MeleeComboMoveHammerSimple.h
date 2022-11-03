#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerSimple {
        namespace {
            inline app::MeleeComboMoveHammerSimple__Class* type_info_ref = nullptr;
        }
        inline app::MeleeComboMoveHammerSimple__Class** type_info = &type_info_ref;
        inline app::MeleeComboMoveHammerSimple__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammerSimple__Class>(type_info, "", "MeleeComboMoveHammerSimple");
        }
        inline app::MeleeComboMoveHammerSimple* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerSimple>(get_class());
        }
    } // namespace MeleeComboMoveHammerSimple
} // namespace app::classes::types
