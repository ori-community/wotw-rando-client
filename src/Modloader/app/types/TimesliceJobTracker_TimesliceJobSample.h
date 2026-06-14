#pragma once
#include <Modloader/app/structs/TimesliceJobTracker_TimesliceJobSample.h>
#include <Modloader/app/structs/TimesliceJobTracker_TimesliceJobSample__Array.h>
#include <Modloader/app/structs/TimesliceJobTracker_TimesliceJobSample__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceJobTracker_TimesliceJobSample {
        inline app::TimesliceJobTracker_TimesliceJobSample__Class** type_info() {
            static app::TimesliceJobTracker_TimesliceJobSample__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimesliceJobTracker_TimesliceJobSample__Class**)(modloader::win::memory::resolve_rva(0x047076C8));
            }
            return cache;
        }
        inline app::TimesliceJobTracker_TimesliceJobSample__Class* get_class() {
            return il2cpp::get_nested_class<app::TimesliceJobTracker_TimesliceJobSample__Class>(type_info(), "", "TimesliceJobTracker", "TimesliceJobSample");
        }
        inline app::TimesliceJobTracker_TimesliceJobSample* create() {
            return il2cpp::create_object<app::TimesliceJobTracker_TimesliceJobSample>(get_class());
        }
        inline app::TimesliceJobTracker_TimesliceJobSample__Array* create_array(int size) {
            return il2cpp::array_new<app::TimesliceJobTracker_TimesliceJobSample__Array>(get_class(), size);
        }
        inline app::TimesliceJobTracker_TimesliceJobSample__Array* create_array(const std::vector<app::TimesliceJobTracker_TimesliceJobSample*>& items) {
            return il2cpp::array_new<app::TimesliceJobTracker_TimesliceJobSample__Array>(get_class(), items);
        }
    } // namespace TimesliceJobTracker_TimesliceJobSample
} // namespace app::classes::types
