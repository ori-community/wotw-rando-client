#pragma once
#include <Modloader/app/structs/RisingWater.h>
#include <Modloader/app/structs/RisingWater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RisingWater {
        inline app::RisingWater__Class** type_info() {
            static app::RisingWater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RisingWater__Class**)(modloader::win::memory::resolve_rva(0x04754B30));
            }
            return cache;
        }
        inline app::RisingWater__Class* get_class() {
            return il2cpp::get_class<app::RisingWater__Class>(type_info(), "", "RisingWater");
        }
        inline app::RisingWater* create() {
            return il2cpp::create_object<app::RisingWater>(get_class());
        }
    } // namespace RisingWater
} // namespace app::classes::types
