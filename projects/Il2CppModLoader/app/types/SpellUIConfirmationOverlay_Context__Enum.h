#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIConfirmationOverlay_Context__Enum {
        namespace {
            app::SpellUIConfirmationOverlay_Context__Enum__Class* type_info_ref = nullptr;
        }
        app::SpellUIConfirmationOverlay_Context__Enum__Class** type_info = &type_info_ref;
        inline app::SpellUIConfirmationOverlay_Context__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIConfirmationOverlay_Context__Enum__Class>(type_info, "", "SpellUIConfirmationOverlay", "Context");
        }
        inline app::SpellUIConfirmationOverlay_Context__Enum* create() {
            return il2cpp::create_object<app::SpellUIConfirmationOverlay_Context__Enum>(get_class());
        }
    } // namespace SpellUIConfirmationOverlay_Context__Enum
} // namespace app::classes::types
