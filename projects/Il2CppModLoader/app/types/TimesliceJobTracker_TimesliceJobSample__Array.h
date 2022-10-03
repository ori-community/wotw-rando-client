#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimesliceJobTracker_TimesliceJobSample__Array {
        namespace {
            app::TimesliceJobTracker_TimesliceJobSample__Array__Class* type_info_ref = nullptr;
        }
        app::TimesliceJobTracker_TimesliceJobSample__Array__Class** type_info = &type_info_ref;
        inline app::TimesliceJobTracker_TimesliceJobSample__Array__Class* get_class() {
            return il2cpp::get_class<app::TimesliceJobTracker_TimesliceJobSample__Array__Class>(type_info, "", "TimesliceJobTracker+TimesliceJobSample[]");
        }
        inline app::TimesliceJobTracker_TimesliceJobSample__Array* create() {
            return il2cpp::create_object<app::TimesliceJobTracker_TimesliceJobSample__Array>(get_class());
        }
    } // namespace TimesliceJobTracker_TimesliceJobSample__Array
} // namespace app::classes::types
