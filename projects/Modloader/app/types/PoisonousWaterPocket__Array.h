#pragma once
#include <Modloader/app/structs/PoisonousWaterPocket__Array.h>
#include <Modloader/app/structs/PoisonousWaterPocket__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoisonousWaterPocket__Array {
        inline app::PoisonousWaterPocket__Array__Class** type_info() {
            static app::PoisonousWaterPocket__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoisonousWaterPocket__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoisonousWaterPocket__Array__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterPocket__Array__Class>(type_info(), "", "PoisonousWaterPocket[]");
        }
        inline app::PoisonousWaterPocket__Array* create() {
            return il2cpp::create_object<app::PoisonousWaterPocket__Array>(get_class());
        }
    } // namespace PoisonousWaterPocket__Array
} // namespace app::classes::types
