#pragma once
#include <Modloader/app/structs/PickupBase__Array.h>
#include <Modloader/app/structs/PickupBase__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickupBase__Array {
        inline app::PickupBase__Array__Class** type_info() {
            static app::PickupBase__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PickupBase__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PickupBase__Array__Class* get_class() {
            return il2cpp::get_class<app::PickupBase__Array__Class>(type_info(), "", "PickupBase[]");
        }
        inline app::PickupBase__Array* create() {
            return il2cpp::create_object<app::PickupBase__Array>(get_class());
        }
    } // namespace PickupBase__Array
} // namespace app::classes::types
