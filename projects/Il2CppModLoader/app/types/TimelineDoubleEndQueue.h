#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineDoubleEndQueue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineDoubleEndQueue__Class** type_info;
        inline app::TimelineDoubleEndQueue__Class* get_class() {
            return il2cpp::get_class<app::TimelineDoubleEndQueue__Class>(type_info, "Moon.Timeline", "TimelineDoubleEndQueue");
        }
        inline app::TimelineDoubleEndQueue* create() {
            return il2cpp::create_object<app::TimelineDoubleEndQueue>(get_class());
        }
    } // namespace TimelineDoubleEndQueue
} // namespace app::classes::types
