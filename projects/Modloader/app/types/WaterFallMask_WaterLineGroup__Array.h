#pragma once
#include <Modloader/app/structs/WaterFallMask_WaterLineGroup__Array.h>
#include <Modloader/app/structs/WaterFallMask_WaterLineGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterFallMask_WaterLineGroup__Array {
        inline app::WaterFallMask_WaterLineGroup__Array__Class** type_info() {
            static app::WaterFallMask_WaterLineGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterFallMask_WaterLineGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterFallMask_WaterLineGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterFallMask_WaterLineGroup__Array__Class>(type_info(), "Moon", "WaterFallMask+WaterLineGroup[]");
        }
        inline app::WaterFallMask_WaterLineGroup__Array* create() {
            return il2cpp::create_object<app::WaterFallMask_WaterLineGroup__Array>(get_class());
        }
    } // namespace WaterFallMask_WaterLineGroup__Array
} // namespace app::classes::types
