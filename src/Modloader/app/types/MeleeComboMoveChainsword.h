#pragma once
#include <Modloader/app/structs/MeleeComboMoveChainsword.h>
#include <Modloader/app/structs/MeleeComboMoveChainsword__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveChainsword {
        inline app::MeleeComboMoveChainsword__Class** type_info() {
            static app::MeleeComboMoveChainsword__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMoveChainsword__Class**)(modloader::win::memory::resolve_rva(0x04783330));
            }
            return cache;
        }
        inline app::MeleeComboMoveChainsword__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveChainsword__Class>(type_info(), "Moon", "MeleeComboMoveChainsword");
        }
        inline app::MeleeComboMoveChainsword* create() {
            return il2cpp::create_object<app::MeleeComboMoveChainsword>(get_class());
        }
    } // namespace MeleeComboMoveChainsword
} // namespace app::classes::types
