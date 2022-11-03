#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterZone {
        namespace {
            inline app::WaterZone__Class* type_info_ref = nullptr;
        }
        inline app::WaterZone__Class** type_info = &type_info_ref;
        inline app::WaterZone__Class* get_class() {
            return il2cpp::get_class<app::WaterZone__Class>(type_info, "", "WaterZone");
        }
        inline app::WaterZone* create() {
            return il2cpp::create_object<app::WaterZone>(get_class());
        }
        inline app::WaterZone__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterZone__Array>(get_class(), size);
        }
        inline app::WaterZone__Array* create_array(const std::vector<app::WaterZone*>& items) {
            return il2cpp::array_new<app::WaterZone__Array>(get_class(), items);
        }
    } // namespace WaterZone
} // namespace app::classes::types
