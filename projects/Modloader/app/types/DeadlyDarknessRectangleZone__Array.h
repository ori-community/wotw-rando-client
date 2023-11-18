#pragma once
#include <Modloader/app/structs/DeadlyDarknessRectangleZone__Array.h>
#include <Modloader/app/structs/DeadlyDarknessRectangleZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeadlyDarknessRectangleZone__Array {
        inline app::DeadlyDarknessRectangleZone__Array__Class** type_info() {
            static app::DeadlyDarknessRectangleZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeadlyDarknessRectangleZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeadlyDarknessRectangleZone__Array__Class* get_class() {
            return il2cpp::get_class<app::DeadlyDarknessRectangleZone__Array__Class>(type_info(), "", "DeadlyDarknessRectangleZone[]");
        }
        inline app::DeadlyDarknessRectangleZone__Array* create() {
            return il2cpp::create_object<app::DeadlyDarknessRectangleZone__Array>(get_class());
        }
    } // namespace DeadlyDarknessRectangleZone__Array
} // namespace app::classes::types
