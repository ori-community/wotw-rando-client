#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterFallMask {
        namespace {
            inline app::WaterFallMask__Class* type_info_ref = nullptr;
        }
        inline app::WaterFallMask__Class** type_info = &type_info_ref;
        inline app::WaterFallMask__Class* get_class() {
            return il2cpp::get_class<app::WaterFallMask__Class>(type_info, "Moon", "WaterFallMask");
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
