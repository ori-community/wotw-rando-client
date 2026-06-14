#pragma once
#include <Modloader/app/structs/PickupBase_c.h>
#include <Modloader/app/structs/PickupBase_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickupBase_c {
        inline app::PickupBase_c__Class** type_info() {
            static app::PickupBase_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PickupBase_c__Class**)(modloader::win::memory::resolve_rva(0x0472D308));
            }
            return cache;
        }
        inline app::PickupBase_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PickupBase_c__Class>(type_info(), "", "PickupBase", "<>c");
        }
        inline app::PickupBase_c* create() {
            return il2cpp::create_object<app::PickupBase_c>(get_class());
        }
    } // namespace PickupBase_c
} // namespace app::classes::types
