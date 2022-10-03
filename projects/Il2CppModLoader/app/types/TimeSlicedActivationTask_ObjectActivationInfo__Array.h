#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedActivationTask_ObjectActivationInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSlicedActivationTask_ObjectActivationInfo__Array__Class** type_info;
        inline app::TimeSlicedActivationTask_ObjectActivationInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedActivationTask_ObjectActivationInfo__Array__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedActivationTask+ObjectActivationInfo[]");
        }
        inline app::TimeSlicedActivationTask_ObjectActivationInfo__Array* create() {
            return il2cpp::create_object<app::TimeSlicedActivationTask_ObjectActivationInfo__Array>(get_class());
        }
    } // namespace TimeSlicedActivationTask_ObjectActivationInfo__Array
} // namespace app::classes::types
