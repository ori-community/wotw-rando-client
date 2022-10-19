#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AcidSlugChargingState {
        inline app::AcidSlugChargingState__Class** type_info = (app::AcidSlugChargingState__Class**)(modloader::win::memory::resolve_rva(0x04783E90));
        inline app::AcidSlugChargingState__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugChargingState__Class>(type_info, "", "AcidSlugChargingState");
        }
        inline app::AcidSlugChargingState* create() {
            return il2cpp::create_object<app::AcidSlugChargingState>(get_class());
        }
    } // namespace AcidSlugChargingState
} // namespace app::classes::types
