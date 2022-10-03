#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedActivationTask_ObjectActivationInfo {
        namespace {
            app::TimeSlicedActivationTask_ObjectActivationInfo__Class* type_info_ref = nullptr;
        }
        app::TimeSlicedActivationTask_ObjectActivationInfo__Class** type_info = &type_info_ref;
        inline app::TimeSlicedActivationTask_ObjectActivationInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSlicedActivationTask_ObjectActivationInfo__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedActivationTask", "ObjectActivationInfo");
        }
        inline app::TimeSlicedActivationTask_ObjectActivationInfo* create() {
            return il2cpp::create_object<app::TimeSlicedActivationTask_ObjectActivationInfo>(get_class());
        }
        inline app::TimeSlicedActivationTask_ObjectActivationInfo__Boxed* box(app::TimeSlicedActivationTask_ObjectActivationInfo value) {
            return il2cpp::box_value<app::TimeSlicedActivationTask_ObjectActivationInfo__Boxed>(get_class(), value);
        }
        inline app::TimeSlicedActivationTask_ObjectActivationInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::TimeSlicedActivationTask_ObjectActivationInfo__Array>(get_class(), size);
        }
    } // namespace TimeSlicedActivationTask_ObjectActivationInfo
} // namespace app::classes::types
