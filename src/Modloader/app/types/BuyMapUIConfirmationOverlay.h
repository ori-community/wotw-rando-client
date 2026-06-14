#pragma once
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay.h>
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuyMapUIConfirmationOverlay {
        inline app::BuyMapUIConfirmationOverlay__Class** type_info() {
            static app::BuyMapUIConfirmationOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuyMapUIConfirmationOverlay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuyMapUIConfirmationOverlay__Class* get_class() {
            return il2cpp::get_class<app::BuyMapUIConfirmationOverlay__Class>(type_info(), "", "BuyMapUIConfirmationOverlay");
        }
        inline app::BuyMapUIConfirmationOverlay* create() {
            return il2cpp::create_object<app::BuyMapUIConfirmationOverlay>(get_class());
        }
    } // namespace BuyMapUIConfirmationOverlay
} // namespace app::classes::types
