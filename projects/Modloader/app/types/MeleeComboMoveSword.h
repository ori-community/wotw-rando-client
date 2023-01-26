#pragma once
#include <Modloader/app/structs/MeleeComboMoveSword.h>
#include <Modloader/app/structs/MeleeComboMoveSword__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveSword {
        inline app::MeleeComboMoveSword__Class** type_info() {
            static app::MeleeComboMoveSword__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMoveSword__Class**)(modloader::win::memory::resolve_rva(0x047324E0));
            }
            return cache;
        }
        inline app::MeleeComboMoveSword__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveSword__Class>(type_info(), "", "MeleeComboMoveSword");
        }
        inline app::MeleeComboMoveSword* create() {
            return il2cpp::create_object<app::MeleeComboMoveSword>(get_class());
        }
    } // namespace MeleeComboMoveSword
} // namespace app::classes::types
