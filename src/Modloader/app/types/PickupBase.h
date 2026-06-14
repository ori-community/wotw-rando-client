#pragma once
#include <Modloader/app/structs/PickupBase.h>
#include <Modloader/app/structs/PickupBase__Array.h>
#include <Modloader/app/structs/PickupBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickupBase {
        inline app::PickupBase__Class** type_info() {
            static app::PickupBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PickupBase__Class**)(modloader::win::memory::resolve_rva(0x047099E0));
            }
            return cache;
        }
        inline app::PickupBase__Class* get_class() {
            return il2cpp::get_class<app::PickupBase__Class>(type_info(), "", "PickupBase");
        }
        inline app::PickupBase* create() {
            return il2cpp::create_object<app::PickupBase>(get_class());
        }
        inline app::PickupBase__Array* create_array(int size) {
            return il2cpp::array_new<app::PickupBase__Array>(get_class(), size);
        }
        inline app::PickupBase__Array* create_array(const std::vector<app::PickupBase*>& items) {
            return il2cpp::array_new<app::PickupBase__Array>(get_class(), items);
        }
    } // namespace PickupBase
} // namespace app::classes::types
