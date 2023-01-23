#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITimeSlicedPreDisableObserver__Class.h>
#include <Modloader/app/structs/ITimeSlicedPreDisableObserver__Array.h>
#include <Modloader/app/structs/ITimeSlicedPreDisableObserver.h>

namespace app::classes::types {
    namespace ITimeSlicedPreDisableObserver {
        inline app::ITimeSlicedPreDisableObserver__Class** type_info = (app::ITimeSlicedPreDisableObserver__Class**)(modloader::win::memory::resolve_rva(0x0473A7C8));
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
