#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimeSlicedJob__Array {
        namespace {
            inline app::ITimeSlicedJob__Array__Class* type_info_ref = nullptr;
        }
        inline app::ITimeSlicedJob__Array__Class** type_info = &type_info_ref;
        inline app::ITimeSlicedJob__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimeSlicedJob__Array__Class>(type_info, "Moon.TimeSlicer", "ITimeSlicedJob[]");
        }
        inline app::ITimeSlicedJob__Array* create() {
            return il2cpp::create_object<app::ITimeSlicedJob__Array>(get_class());
        }
    } // namespace ITimeSlicedJob__Array
} // namespace app::classes::types
