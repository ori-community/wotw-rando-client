#pragma once
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay_Selection__Enum.h>
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay_Selection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuyMapUIConfirmationOverlay_Selection__Enum {
        inline app::BuyMapUIConfirmationOverlay_Selection__Enum__Class** type_info() {
            static app::BuyMapUIConfirmationOverlay_Selection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuyMapUIConfirmationOverlay_Selection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuyMapUIConfirmationOverlay_Selection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BuyMapUIConfirmationOverlay_Selection__Enum__Class>(type_info(), "", "BuyMapUIConfirmationOverlay", "Selection");
        }
        inline app::BuyMapUIConfirmationOverlay_Selection__Enum* create() {
            return il2cpp::create_object<app::BuyMapUIConfirmationOverlay_Selection__Enum>(get_class());
        }
    } // namespace BuyMapUIConfirmationOverlay_Selection__Enum
} // namespace app::classes::types
