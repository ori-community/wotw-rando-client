#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PickupBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PickupBase__Class** type_info;
        inline app::PickupBase__Class* get_class() {
            return il2cpp::get_class<app::PickupBase__Class>(type_info, "", "PickupBase");
        }
        inline app::PickupBase* create() {
            return il2cpp::create_object<app::PickupBase>(get_class());
        }
        inline app::PickupBase__Array* create_array(int size) {
            return il2cpp::array_new<app::PickupBase__Array>(get_class(), size);
        }
    } // namespace PickupBase
} // namespace app::classes::types
