#pragma once
#include <Modloader/app/structs/WaterFallMask.h>
#include <Modloader/app/structs/WaterFallMask__Array.h>
#include <Modloader/app/structs/WaterFallMask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterFallMask {
        inline app::WaterFallMask__Class** type_info() {
            static app::WaterFallMask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterFallMask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterFallMask__Class* get_class() {
            return il2cpp::get_class<app::WaterFallMask__Class>(type_info(), "Moon", "WaterFallMask");
        }
        inline app::WaterFallMask* create() {
            return il2cpp::create_object<app::WaterFallMask>(get_class());
        }
        inline app::WaterFallMask__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterFallMask__Array>(get_class(), size);
        }
        inline app::WaterFallMask__Array* create_array(const std::vector<app::WaterFallMask*>& items) {
            return il2cpp::array_new<app::WaterFallMask__Array>(get_class(), items);
        }
    } // namespace WaterFallMask
} // namespace app::classes::types
