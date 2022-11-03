#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeadlyDarknessRectangleZone__Array {
        namespace {
            inline app::DeadlyDarknessRectangleZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::DeadlyDarknessRectangleZone__Array__Class** type_info = &type_info_ref;
        inline app::DeadlyDarknessRectangleZone__Array__Class* get_class() {
            return il2cpp::get_class<app::DeadlyDarknessRectangleZone__Array__Class>(type_info, "", "DeadlyDarknessRectangleZone[]");
        }
        inline app::DeadlyDarknessRectangleZone__Array* create() {
            return il2cpp::create_object<app::DeadlyDarknessRectangleZone__Array>(get_class());
        }
    } // namespace DeadlyDarknessRectangleZone__Array
} // namespace app::classes::types
