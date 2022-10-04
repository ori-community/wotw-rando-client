#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimeSlicedJob {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITimeSlicedJob__Class** type_info;
        inline app::ITimeSlicedJob__Class* get_class() {
            return il2cpp::get_class<app::ITimeSlicedJob__Class>(type_info, "Moon.TimeSlicer", "ITimeSlicedJob");
        }
        inline app::ITimeSlicedJob* create() {
            return il2cpp::create_object<app::ITimeSlicedJob>(get_class());
        }
        inline app::ITimeSlicedJob__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimeSlicedJob__Array>(get_class(), size);
        }
    } // namespace ITimeSlicedJob
} // namespace app::classes::types
