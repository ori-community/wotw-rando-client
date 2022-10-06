#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimesliceJobTracker_TimesliceJobSample {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimesliceJobTracker_TimesliceJobSample__Class** type_info;
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
