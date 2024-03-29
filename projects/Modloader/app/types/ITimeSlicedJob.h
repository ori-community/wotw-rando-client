#pragma once
#include <Modloader/app/structs/ITimeSlicedJob.h>
#include <Modloader/app/structs/ITimeSlicedJob__Array.h>
#include <Modloader/app/structs/ITimeSlicedJob__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimeSlicedJob {
        inline app::ITimeSlicedJob__Class** type_info() {
            static app::ITimeSlicedJob__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITimeSlicedJob__Class**)(modloader::win::memory::resolve_rva(0x0474E970));
            }
            return cache;
        }
        inline app::ITimeSlicedJob__Class* get_class() {
            return il2cpp::get_class<app::ITimeSlicedJob__Class>(type_info(), "Moon.TimeSlicer", "ITimeSlicedJob");
        }
        inline app::ITimeSlicedJob__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimeSlicedJob__Array>(get_class(), size);
        }
        inline app::ITimeSlicedJob__Array* create_array(const std::vector<app::ITimeSlicedJob*>& items) {
            return il2cpp::array_new<app::ITimeSlicedJob__Array>(get_class(), items);
        }
    } // namespace ITimeSlicedJob
} // namespace app::classes::types
