#pragma once
#include <Modloader/app/structs/MeleeComboMoveSwordstaff.h>
#include <Modloader/app/structs/MeleeComboMoveSwordstaff__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSwordstaff {
        inline app::MeleeComboMoveSwordstaff__Class** type_info() {
            static app::MeleeComboMoveSwordstaff__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMoveSwordstaff__Class**)(modloader::win::memory::resolve_rva(0x0476C748));
            }
            return cache;
        }
        inline app::MeleeComboMoveSwordstaff__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSwordstaff__Class>(type_info(), "", "MeleeComboMoveSwordstaff");
        }
        inline app::MeleeComboMoveSwordstaff* create() {
            return il2cpp::create_object<app::MeleeComboMoveSwordstaff>(get_class());
        }
    } // namespace MeleeComboMoveSwordstaff
} // namespace app::classes::types
