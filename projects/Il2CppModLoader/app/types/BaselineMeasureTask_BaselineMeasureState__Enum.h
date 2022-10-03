#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaselineMeasureTask_BaselineMeasureState__Enum {
        namespace {
            app::BaselineMeasureTask_BaselineMeasureState__Enum__Class* type_info_ref = nullptr;
        }
        app::BaselineMeasureTask_BaselineMeasureState__Enum__Class** type_info = &type_info_ref;
        inline app::BaselineMeasureTask_BaselineMeasureState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BaselineMeasureTask_BaselineMeasureState__Enum__Class>(type_info, "Moon.HierarchyPerformanceTest", "BaselineMeasureTask", "BaselineMeasureState");
        }
        inline app::BaselineMeasureTask_BaselineMeasureState__Enum* create() {
            return il2cpp::create_object<app::BaselineMeasureTask_BaselineMeasureState__Enum>(get_class());
        }
    } // namespace BaselineMeasureTask_BaselineMeasureState__Enum
} // namespace app::classes::types
