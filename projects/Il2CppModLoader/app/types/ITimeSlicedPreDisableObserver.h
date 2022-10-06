#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimeSlicedPreDisableObserver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITimeSlicedPreDisableObserver__Class** type_info;
        inline app::ITimeSlicedPreDisableObserver__Class* get_class() {
            return il2cpp::get_class<app::ITimeSlicedPreDisableObserver__Class>(type_info, "Moon.TimeSlicer", "ITimeSlicedPreDisableObserver");
        }
        inline app::ITimeSlicedPreDisableObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimeSlicedPreDisableObserver__Array>(get_class(), size);
        }
        inline app::ITimeSlicedPreDisableObserver__Array* create_array(const std::vector<app::ITimeSlicedPreDisableObserver*>& items) {
            return il2cpp::array_new<app::ITimeSlicedPreDisableObserver__Array>(get_class(), items);
        }
    } // namespace ITimeSlicedPreDisableObserver
} // namespace app::classes::types
