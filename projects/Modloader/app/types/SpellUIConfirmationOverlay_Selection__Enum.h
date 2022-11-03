#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellUIConfirmationOverlay_Selection__Enum {
        namespace {
            inline app::SpellUIConfirmationOverlay_Selection__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SpellUIConfirmationOverlay_Selection__Enum__Class** type_info = &type_info_ref;
        inline app::SpellUIConfirmationOverlay_Selection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIConfirmationOverlay_Selection__Enum__Class>(type_info, "", "SpellUIConfirmationOverlay", "Selection");
        }
        inline app::SpellUIConfirmationOverlay_Selection__Enum* create() {
            return il2cpp::create_object<app::SpellUIConfirmationOverlay_Selection__Enum>(get_class());
        }
    } // namespace SpellUIConfirmationOverlay_Selection__Enum
} // namespace app::classes::types
