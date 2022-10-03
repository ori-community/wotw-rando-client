#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PickupBase_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PickupBase_c__Class** type_info;
        inline app::PickupBase_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PickupBase_c__Class>(type_info, "", "PickupBase", "<>c");
        }
        inline app::PickupBase_c* create() {
            return il2cpp::create_object<app::PickupBase_c>(get_class());
        }
    } // namespace PickupBase_c
} // namespace app::classes::types
