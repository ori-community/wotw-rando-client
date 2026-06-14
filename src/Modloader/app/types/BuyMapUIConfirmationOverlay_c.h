#pragma once
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay_c.h>
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuyMapUIConfirmationOverlay_c {
        inline app::BuyMapUIConfirmationOverlay_c__Class** type_info() {
            static app::BuyMapUIConfirmationOverlay_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuyMapUIConfirmationOverlay_c__Class**)(modloader::win::memory::resolve_rva(0x0477EE78));
            }
            return cache;
        }
        inline app::BuyMapUIConfirmationOverlay_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuyMapUIConfirmationOverlay_c__Class>(type_info(), "", "BuyMapUIConfirmationOverlay", "<>c");
        }
        inline app::BuyMapUIConfirmationOverlay_c* create() {
            return il2cpp::create_object<app::BuyMapUIConfirmationOverlay_c>(get_class());
        }
    } // namespace BuyMapUIConfirmationOverlay_c
} // namespace app::classes::types
