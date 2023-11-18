#pragma once
#include <Modloader/app/structs/RisingWaterTrigger.h>
#include <Modloader/app/structs/RisingWaterTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RisingWaterTrigger {
        inline app::RisingWaterTrigger__Class** type_info() {
            static app::RisingWaterTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RisingWaterTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RisingWaterTrigger__Class* get_class() {
            return il2cpp::get_class<app::RisingWaterTrigger__Class>(type_info(), "", "RisingWaterTrigger");
        }
        inline app::RisingWaterTrigger* create() {
            return il2cpp::create_object<app::RisingWaterTrigger>(get_class());
        }
    } // namespace RisingWaterTrigger
} // namespace app::classes::types
