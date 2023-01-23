#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay_Selection__Enum__Class.h>
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay_Selection__Enum.h>

namespace app::classes::types {
    namespace BuyMapUIConfirmationOverlay_Selection__Enum {
        namespace {
            inline app::BuyMapUIConfirmationOverlay_Selection__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BuyMapUIConfirmationOverlay_Selection__Enum__Class** type_info = &type_info_ref;
        inline app::BuyMapUIConfirmationOverlay_Selection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BuyMapUIConfirmationOverlay_Selection__Enum__Class>(type_info, "", "BuyMapUIConfirmationOverlay", "Selection");
        }
        inline app::BuyMapUIConfirmationOverlay_Selection__Enum* create() {
            return il2cpp::create_object<app::BuyMapUIConfirmationOverlay_Selection__Enum>(get_class());
        }
    } // namespace BuyMapUIConfirmationOverlay_Selection__Enum
} // namespace app::classes::types
