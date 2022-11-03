#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimeSlicedPostEnableObserver {
        inline app::ITimeSlicedPostEnableObserver__Class** type_info = (app::ITimeSlicedPostEnableObserver__Class**)(modloader::win::memory::resolve_rva(0x0473D730));
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
