#pragma once
#include <Modloader/app/structs/CartAccelerationInputType__Enum.h>
#include <Modloader/app/structs/CartAccelerationInputType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartAccelerationInputType__Enum {
        inline app::CartAccelerationInputType__Enum__Class** type_info() {
            static app::CartAccelerationInputType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartAccelerationInputType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartAccelerationInputType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CartAccelerationInputType__Enum__Class>(type_info(), "", "CartAccelerationInputType");
        }
        inline app::CartAccelerationInputType__Enum* create() {
            return il2cpp::create_object<app::CartAccelerationInputType__Enum>(get_class());
        }
    } // namespace CartAccelerationInputType__Enum
} // namespace app::classes::types
