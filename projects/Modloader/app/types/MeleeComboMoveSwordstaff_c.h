#pragma once
#include <Modloader/app/structs/MeleeComboMoveSwordstaff_c.h>
#include <Modloader/app/structs/MeleeComboMoveSwordstaff_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSwordstaff_c {
        inline app::MeleeComboMoveSwordstaff_c__Class** type_info() {
            static app::MeleeComboMoveSwordstaff_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMoveSwordstaff_c__Class**)(modloader::win::memory::resolve_rva(0x0477AA18));
            }
            return cache;
        }
        inline app::MeleeComboMoveSwordstaff_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveSwordstaff_c__Class>(type_info(), "", "MeleeComboMoveSwordstaff", "<>c");
        }
        inline app::MeleeComboMoveSwordstaff_c* create() {
            return il2cpp::create_object<app::MeleeComboMoveSwordstaff_c>(get_class());
        }
    } // namespace MeleeComboMoveSwordstaff_c
} // namespace app::classes::types
