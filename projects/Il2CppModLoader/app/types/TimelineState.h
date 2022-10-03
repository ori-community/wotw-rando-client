#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineState__Class** type_info;
        inline app::TimelineState__Class* get_class() {
            return il2cpp::get_class<app::TimelineState__Class>(type_info, "Moon.Timeline", "TimelineState");
        }
        inline app::TimelineState* create() {
            return il2cpp::create_object<app::TimelineState>(get_class());
        }
    } // namespace TimelineState
} // namespace app::classes::types
