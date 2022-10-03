#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSliceSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSliceSystem__Class** type_info;
        inline app::TimeSliceSystem__Class* get_class() {
            return il2cpp::get_class<app::TimeSliceSystem__Class>(type_info, "Moon.TimeSlicer", "TimeSliceSystem");
        }
        inline app::TimeSliceSystem* create() {
            return il2cpp::create_object<app::TimeSliceSystem>(get_class());
        }
    } // namespace TimeSliceSystem
} // namespace app::classes::types
