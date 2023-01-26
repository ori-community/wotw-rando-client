#pragma once
#include <Modloader/app/structs/Water_WaterMode__Enum.h>
#include <Modloader/app/structs/Water_WaterMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Water_WaterMode__Enum {
        inline app::Water_WaterMode__Enum__Class** type_info() {
            static app::Water_WaterMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Water_WaterMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Water_WaterMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Water_WaterMode__Enum__Class>(type_info(), "", "Water", "WaterMode");
        }
        inline app::Water_WaterMode__Enum* create() {
            return il2cpp::create_object<app::Water_WaterMode__Enum>(get_class());
        }
    } // namespace Water_WaterMode__Enum
} // namespace app::classes::types
