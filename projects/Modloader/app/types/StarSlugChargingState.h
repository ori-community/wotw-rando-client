#pragma once
#include <Modloader/app/structs/StarSlugChargingState.h>
#include <Modloader/app/structs/StarSlugChargingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StarSlugChargingState {
        inline app::StarSlugChargingState__Class** type_info() {
            static app::StarSlugChargingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StarSlugChargingState__Class**)(modloader::win::memory::resolve_rva(0x0471C9B8));
            }
            return cache;
        }
        inline app::StarSlugChargingState__Class* get_class() {
            return il2cpp::get_class<app::StarSlugChargingState__Class>(type_info(), "", "StarSlugChargingState");
        }
        inline app::StarSlugChargingState* create() {
            return il2cpp::create_object<app::StarSlugChargingState>(get_class());
        }
    } // namespace StarSlugChargingState
} // namespace app::classes::types
