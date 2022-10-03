#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WispPickupContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WispPickupContext__Class** type_info;
        inline app::WispPickupContext__Class* get_class() {
            return il2cpp::get_class<app::WispPickupContext__Class>(type_info, "", "WispPickupContext");
        }
        inline app::WispPickupContext* create() {
            return il2cpp::create_object<app::WispPickupContext>(get_class());
        }
    } // namespace WispPickupContext
} // namespace app::classes::types
