#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PickupBase__Array {
        namespace {
            inline app::PickupBase__Array__Class* type_info_ref = nullptr;
        }
        inline app::PickupBase__Array__Class** type_info = &type_info_ref;
        inline app::PickupBase__Array__Class* get_class() {
            return il2cpp::get_class<app::PickupBase__Array__Class>(type_info, "", "PickupBase[]");
        }
        inline app::PickupBase__Array* create() {
            return il2cpp::create_object<app::PickupBase__Array>(get_class());
        }
    } // namespace PickupBase__Array
} // namespace app::classes::types
