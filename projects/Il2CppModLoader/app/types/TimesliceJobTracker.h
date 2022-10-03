#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimesliceJobTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimesliceJobTracker__Class** type_info;
        inline app::TimesliceJobTracker__Class* get_class() {
            return il2cpp::get_class<app::TimesliceJobTracker__Class>(type_info, "", "TimesliceJobTracker");
        }
        inline app::TimesliceJobTracker* create() {
            return il2cpp::create_object<app::TimesliceJobTracker>(get_class());
        }
    } // namespace TimesliceJobTracker
} // namespace app::classes::types
