#pragma once
#include <Modloader/app/structs/TimeSlicedActivationTask_ObjectActivationInfo__Array.h>
#include <Modloader/app/structs/TimeSlicedActivationTask_ObjectActivationInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedActivationTask_ObjectActivationInfo__Array {
        inline app::TimeSlicedActivationTask_ObjectActivationInfo__Array__Class** type_info() {
            static app::TimeSlicedActivationTask_ObjectActivationInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeSlicedActivationTask_ObjectActivationInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x047323D8));
            }
            return cache;
        }
        inline app::TimeSlicedActivationTask_ObjectActivationInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedActivationTask_ObjectActivationInfo__Array__Class>(type_info(), "Moon.TimeSlicer", "TimeSlicedActivationTask+ObjectActivationInfo[]");
        }
        inline app::TimeSlicedActivationTask_ObjectActivationInfo__Array* create() {
            return il2cpp::create_object<app::TimeSlicedActivationTask_ObjectActivationInfo__Array>(get_class());
        }
    } // namespace TimeSlicedActivationTask_ObjectActivationInfo__Array
} // namespace app::classes::types
