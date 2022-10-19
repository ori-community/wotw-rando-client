#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimesliceJobTracker_TimesliceJobSample {
        inline app::TimesliceJobTracker_TimesliceJobSample__Class** type_info = (app::TimesliceJobTracker_TimesliceJobSample__Class**)(modloader::win::memory::resolve_rva(0x047076C8));
        inline app::TimesliceJobTracker_TimesliceJobSample__Class* get_class() {
            return il2cpp::get_nested_class<app::TimesliceJobTracker_TimesliceJobSample__Class>(type_info, "", "TimesliceJobTracker", "TimesliceJobSample");
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
