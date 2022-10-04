#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPickupCollector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPickupCollector__Class** type_info;
        inline app::IPickupCollector__Class* get_class() {
            return il2cpp::get_class<app::IPickupCollector__Class>(type_info, "", "IPickupCollector");
        }
    } // namespace IPickupCollector
} // namespace app::classes::types
