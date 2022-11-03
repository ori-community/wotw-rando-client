#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeadlyDarknessRectangleZone {
        namespace {
            inline app::DeadlyDarknessRectangleZone__Class* type_info_ref = nullptr;
        }
        inline app::DeadlyDarknessRectangleZone__Class** type_info = &type_info_ref;
        inline app::DeadlyDarknessRectangleZone__Class* get_class() {
            return il2cpp::get_class<app::DeadlyDarknessRectangleZone__Class>(type_info, "", "DeadlyDarknessRectangleZone");
        }
        inline app::DeadlyDarknessRectangleZone* create() {
            return il2cpp::create_object<app::DeadlyDarknessRectangleZone>(get_class());
        }
        inline app::DeadlyDarknessRectangleZone__Array* create_array(int size) {
            return il2cpp::array_new<app::DeadlyDarknessRectangleZone__Array>(get_class(), size);
        }
        inline app::DeadlyDarknessRectangleZone__Array* create_array(const std::vector<app::DeadlyDarknessRectangleZone*>& items) {
            return il2cpp::array_new<app::DeadlyDarknessRectangleZone__Array>(get_class(), items);
        }
    } // namespace DeadlyDarknessRectangleZone
} // namespace app::classes::types
