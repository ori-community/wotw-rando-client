#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMoveSwordstaff {
        inline app::MeleeComboMoveSwordstaff__Class** type_info = (app::MeleeComboMoveSwordstaff__Class**)(modloader::win::memory::resolve_rva(0x0476C748));
        inline app::MeleeComboMoveSwordstaff__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSwordstaff__Class>(type_info, "", "MeleeComboMoveSwordstaff");
        }
        inline app::MeleeComboMoveSwordstaff* create() {
            return il2cpp::create_object<app::MeleeComboMoveSwordstaff>(get_class());
        }
    } // namespace MeleeComboMoveSwordstaff
} // namespace app::classes::types
