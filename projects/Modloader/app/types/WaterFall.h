#pragma once
#include <Modloader/app/structs/WaterFall.h>
#include <Modloader/app/structs/WaterFall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterFall {
        inline app::WaterFall__Class** type_info() {
            static app::WaterFall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterFall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterFall__Class* get_class() {
            return il2cpp::get_class<app::WaterFall__Class>(type_info(), "Moon", "WaterFall");
        }
        inline app::WaterFall* create() {
            return il2cpp::create_object<app::WaterFall>(get_class());
        }
    } // namespace WaterFall
} // namespace app::classes::types
