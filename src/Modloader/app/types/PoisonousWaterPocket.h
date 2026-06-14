#pragma once
#include <Modloader/app/structs/PoisonousWaterPocket.h>
#include <Modloader/app/structs/PoisonousWaterPocket__Array.h>
#include <Modloader/app/structs/PoisonousWaterPocket__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoisonousWaterPocket {
        inline app::PoisonousWaterPocket__Class** type_info() {
            static app::PoisonousWaterPocket__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoisonousWaterPocket__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoisonousWaterPocket__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterPocket__Class>(type_info(), "", "PoisonousWaterPocket");
        }
        inline app::PoisonousWaterPocket* create() {
            return il2cpp::create_object<app::PoisonousWaterPocket>(get_class());
        }
        inline app::PoisonousWaterPocket__Array* create_array(int size) {
            return il2cpp::array_new<app::PoisonousWaterPocket__Array>(get_class(), size);
        }
        inline app::PoisonousWaterPocket__Array* create_array(const std::vector<app::PoisonousWaterPocket*>& items) {
            return il2cpp::array_new<app::PoisonousWaterPocket__Array>(get_class(), items);
        }
    } // namespace PoisonousWaterPocket
} // namespace app::classes::types
