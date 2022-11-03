#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StarSlugChargingState {
        inline app::StarSlugChargingState__Class** type_info = (app::StarSlugChargingState__Class**)(modloader::win::memory::resolve_rva(0x0471C9B8));
        inline app::StarSlugChargingState__Class* get_class() {
            return il2cpp::get_class<app::StarSlugChargingState__Class>(type_info, "", "StarSlugChargingState");
        }
        inline app::StarSlugChargingState* create() {
            return il2cpp::create_object<app::StarSlugChargingState>(get_class());
        }
    } // namespace StarSlugChargingState
} // namespace app::classes::types
