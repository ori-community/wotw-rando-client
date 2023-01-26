#pragma once
#include <Modloader/app/structs/AcidSlugChargingState.h>
#include <Modloader/app/structs/AcidSlugChargingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcidSlugChargingState {
        inline app::AcidSlugChargingState__Class** type_info() {
            static app::AcidSlugChargingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AcidSlugChargingState__Class**)(modloader::win::memory::resolve_rva(0x04783E90));
            }
            return cache;
        }
        inline app::AcidSlugChargingState__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugChargingState__Class>(type_info(), "", "AcidSlugChargingState");
        }
        inline app::AcidSlugChargingState* create() {
            return il2cpp::create_object<app::AcidSlugChargingState>(get_class());
        }
    } // namespace AcidSlugChargingState
} // namespace app::classes::types
