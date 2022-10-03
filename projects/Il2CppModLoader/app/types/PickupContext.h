#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PickupContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PickupContext__Class** type_info;
        inline app::PickupContext__Class* get_class() {
            return il2cpp::get_class<app::PickupContext__Class>(type_info, "", "PickupContext");
        }
        inline app::PickupContext* create() {
            return il2cpp::create_object<app::PickupContext>(get_class());
        }
    } // namespace PickupContext
} // namespace app::classes::types
