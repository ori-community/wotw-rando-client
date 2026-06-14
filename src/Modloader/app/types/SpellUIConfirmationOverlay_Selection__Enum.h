#pragma once
#include <Modloader/app/structs/SpellUIConfirmationOverlay_Selection__Enum.h>
#include <Modloader/app/structs/SpellUIConfirmationOverlay_Selection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIConfirmationOverlay_Selection__Enum {
        inline app::SpellUIConfirmationOverlay_Selection__Enum__Class** type_info() {
            static app::SpellUIConfirmationOverlay_Selection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUIConfirmationOverlay_Selection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUIConfirmationOverlay_Selection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIConfirmationOverlay_Selection__Enum__Class>(type_info(), "", "SpellUIConfirmationOverlay", "Selection");
        }
        inline app::SpellUIConfirmationOverlay_Selection__Enum* create() {
            return il2cpp::create_object<app::SpellUIConfirmationOverlay_Selection__Enum>(get_class());
        }
    } // namespace SpellUIConfirmationOverlay_Selection__Enum
} // namespace app::classes::types
