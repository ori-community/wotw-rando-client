#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIConfirmationOverlay_Selection__Enum {
        namespace {
            app::SpellUIConfirmationOverlay_Selection__Enum__Class* type_info_ref = nullptr;
        }
        app::SpellUIConfirmationOverlay_Selection__Enum__Class** type_info = &type_info_ref;
        inline app::SpellUIConfirmationOverlay_Selection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIConfirmationOverlay_Selection__Enum__Class>(type_info, "", "SpellUIConfirmationOverlay", "Selection");
        }
        inline app::SpellUIConfirmationOverlay_Selection__Enum* create() {
            return il2cpp::create_object<app::SpellUIConfirmationOverlay_Selection__Enum>(get_class());
        }
    } // namespace SpellUIConfirmationOverlay_Selection__Enum
} // namespace app::classes::types
