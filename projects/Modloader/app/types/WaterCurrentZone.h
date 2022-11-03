#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterCurrentZone {
        namespace {
            inline app::WaterCurrentZone__Class* type_info_ref = nullptr;
        }
        inline app::WaterCurrentZone__Class** type_info = &type_info_ref;
        inline app::WaterCurrentZone__Class* get_class() {
            return il2cpp::get_class<app::WaterCurrentZone__Class>(type_info, "", "WaterCurrentZone");
        }
        inline app::WaterCurrentZone* create() {
            return il2cpp::create_object<app::WaterCurrentZone>(get_class());
        }
        inline app::WaterCurrentZone__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterCurrentZone__Array>(get_class(), size);
        }
        inline app::WaterCurrentZone__Array* create_array(const std::vector<app::WaterCurrentZone*>& items) {
            return il2cpp::array_new<app::WaterCurrentZone__Array>(get_class(), items);
        }
    } // namespace WaterCurrentZone
} // namespace app::classes::types
