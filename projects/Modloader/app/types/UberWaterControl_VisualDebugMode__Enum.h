#pragma once
#include <Modloader/app/structs/UberWaterControl_VisualDebugMode__Enum.h>
#include <Modloader/app/structs/UberWaterControl_VisualDebugMode__Enum__Array.h>
#include <Modloader/app/structs/UberWaterControl_VisualDebugMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl_VisualDebugMode__Enum {
        inline app::UberWaterControl_VisualDebugMode__Enum__Class** type_info() {
            static app::UberWaterControl_VisualDebugMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterControl_VisualDebugMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterControl_VisualDebugMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterControl_VisualDebugMode__Enum__Class>(type_info(), "", "UberWaterControl", "VisualDebugMode");
        }
        inline app::UberWaterControl_VisualDebugMode__Enum* create() {
            return il2cpp::create_object<app::UberWaterControl_VisualDebugMode__Enum>(get_class());
        }
        inline app::UberWaterControl_VisualDebugMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterControl_VisualDebugMode__Enum__Array>(get_class(), size);
        }
        inline app::UberWaterControl_VisualDebugMode__Enum__Array* create_array(const std::vector<app::UberWaterControl_VisualDebugMode__Enum*>& items) {
            return il2cpp::array_new<app::UberWaterControl_VisualDebugMode__Enum__Array>(get_class(), items);
        }
    } // namespace UberWaterControl_VisualDebugMode__Enum
} // namespace app::classes::types
