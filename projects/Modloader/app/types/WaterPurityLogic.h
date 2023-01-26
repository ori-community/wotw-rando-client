#pragma once
#include <Modloader/app/structs/WaterPurityLogic.h>
#include <Modloader/app/structs/WaterPurityLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterPurityLogic {
        inline app::WaterPurityLogic__Class** type_info() {
            static app::WaterPurityLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterPurityLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterPurityLogic__Class* get_class() {
            return il2cpp::get_class<app::WaterPurityLogic__Class>(type_info(), "", "WaterPurityLogic");
        }
        inline app::WaterPurityLogic* create() {
            return il2cpp::create_object<app::WaterPurityLogic>(get_class());
        }
    } // namespace WaterPurityLogic
} // namespace app::classes::types
