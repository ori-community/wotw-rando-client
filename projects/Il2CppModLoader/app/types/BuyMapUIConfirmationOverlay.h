#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuyMapUIConfirmationOverlay {
        namespace {
            app::BuyMapUIConfirmationOverlay__Class* type_info_ref = nullptr;
        }
        app::BuyMapUIConfirmationOverlay__Class** type_info = &type_info_ref;
        inline app::BuyMapUIConfirmationOverlay__Class* get_class() {
            return il2cpp::get_class<app::BuyMapUIConfirmationOverlay__Class>(type_info, "", "BuyMapUIConfirmationOverlay");
        }
        inline app::BuyMapUIConfirmationOverlay* create() {
            return il2cpp::create_object<app::BuyMapUIConfirmationOverlay>(get_class());
        }
    } // namespace BuyMapUIConfirmationOverlay
} // namespace app::classes::types
