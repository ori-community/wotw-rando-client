#pragma once
#include <Modloader/app/structs/ITimeSlicedPreDisableObserver__Array.h>
#include <Modloader/app/structs/ITimeSlicedPreDisableObserver__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimeSlicedPreDisableObserver__Array {
        inline app::ITimeSlicedPreDisableObserver__Array__Class** type_info() {
            static app::ITimeSlicedPreDisableObserver__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITimeSlicedPreDisableObserver__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITimeSlicedPreDisableObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimeSlicedPreDisableObserver__Array__Class>(type_info(), "Moon.TimeSlicer", "ITimeSlicedPreDisableObserver[]");
        }
        inline app::ITimeSlicedPreDisableObserver__Array* create() {
            return il2cpp::create_object<app::ITimeSlicedPreDisableObserver__Array>(get_class());
        }
    } // namespace ITimeSlicedPreDisableObserver__Array
} // namespace app::classes::types
