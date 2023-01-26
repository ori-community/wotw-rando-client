#pragma once
#include <Modloader/app/structs/BaselineMeasureTask_BaselineMeasureState__Enum.h>
#include <Modloader/app/structs/BaselineMeasureTask_BaselineMeasureState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaselineMeasureTask_BaselineMeasureState__Enum {
        inline app::BaselineMeasureTask_BaselineMeasureState__Enum__Class** type_info() {
            static app::BaselineMeasureTask_BaselineMeasureState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaselineMeasureTask_BaselineMeasureState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaselineMeasureTask_BaselineMeasureState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BaselineMeasureTask_BaselineMeasureState__Enum__Class>(type_info(), "Moon.HierarchyPerformanceTest", "BaselineMeasureTask", "BaselineMeasureState");
        }
        inline app::BaselineMeasureTask_BaselineMeasureState__Enum* create() {
            return il2cpp::create_object<app::BaselineMeasureTask_BaselineMeasureState__Enum>(get_class());
        }
    } // namespace BaselineMeasureTask_BaselineMeasureState__Enum
} // namespace app::classes::types
