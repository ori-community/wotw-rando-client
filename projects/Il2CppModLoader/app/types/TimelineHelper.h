#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineHelper__Class** type_info;
        inline app::TimelineHelper__Class* get_class() {
            return il2cpp::get_class<app::TimelineHelper__Class>(type_info, "Moon.Timeline", "TimelineHelper");
        }
        inline app::TimelineHelper* create() {
            return il2cpp::create_object<app::TimelineHelper>(get_class());
        }
    } // namespace TimelineHelper
} // namespace app::classes::types
