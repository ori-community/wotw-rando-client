#pragma once
#include <Modloader/app/structs/ITimeSlicedJob__Array.h>
#include <Modloader/app/structs/ITimeSlicedJob__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimeSlicedJob__Array {
        inline app::ITimeSlicedJob__Array__Class** type_info() {
            static app::ITimeSlicedJob__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITimeSlicedJob__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITimeSlicedJob__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimeSlicedJob__Array__Class>(type_info(), "Moon.TimeSlicer", "ITimeSlicedJob[]");
        }
        inline app::ITimeSlicedJob__Array* create() {
            return il2cpp::create_object<app::ITimeSlicedJob__Array>(get_class());
        }
    } // namespace ITimeSlicedJob__Array
} // namespace app::classes::types
