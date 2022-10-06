#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimeSlicedPostEnableObserver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITimeSlicedPostEnableObserver__Class** type_info;
        inline app::ITimeSlicedPostEnableObserver__Class* get_class() {
            return il2cpp::get_class<app::ITimeSlicedPostEnableObserver__Class>(type_info, "Moon.TimeSlicer", "ITimeSlicedPostEnableObserver");
        }
        inline app::ITimeSlicedPostEnableObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimeSlicedPostEnableObserver__Array>(get_class(), size);
        }
        inline app::ITimeSlicedPostEnableObserver__Array* create_array(const std::vector<app::ITimeSlicedPostEnableObserver*>& items) {
            return il2cpp::array_new<app::ITimeSlicedPostEnableObserver__Array>(get_class(), items);
        }
    } // namespace ITimeSlicedPostEnableObserver
} // namespace app::classes::types
