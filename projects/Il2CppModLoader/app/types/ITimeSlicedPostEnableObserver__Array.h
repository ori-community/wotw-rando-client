#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimeSlicedPostEnableObserver__Array {
        namespace {
            app::ITimeSlicedPostEnableObserver__Array__Class* type_info_ref = nullptr;
        }
        app::ITimeSlicedPostEnableObserver__Array__Class** type_info = &type_info_ref;
        inline app::ITimeSlicedPostEnableObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimeSlicedPostEnableObserver__Array__Class>(type_info, "Moon.TimeSlicer", "ITimeSlicedPostEnableObserver[]");
        }
        inline app::ITimeSlicedPostEnableObserver__Array* create() {
            return il2cpp::create_object<app::ITimeSlicedPostEnableObserver__Array>(get_class());
        }
    } // namespace ITimeSlicedPostEnableObserver__Array
} // namespace app::classes::types
