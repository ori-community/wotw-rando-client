#pragma once
#include <Modloader/app/structs/SpellUIConfirmationOverlay.h>
#include <Modloader/app/structs/SpellUIConfirmationOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIConfirmationOverlay {
        inline app::SpellUIConfirmationOverlay__Class** type_info() {
            static app::SpellUIConfirmationOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUIConfirmationOverlay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUIConfirmationOverlay__Class* get_class() {
            return il2cpp::get_class<app::SpellUIConfirmationOverlay__Class>(type_info(), "", "SpellUIConfirmationOverlay");
        }
        inline app::SpellUIConfirmationOverlay* create() {
            return il2cpp::create_object<app::SpellUIConfirmationOverlay>(get_class());
        }
    } // namespace SpellUIConfirmationOverlay
} // namespace app::classes::types
