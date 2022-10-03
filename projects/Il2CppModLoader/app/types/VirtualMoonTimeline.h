#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualMoonTimeline {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VirtualMoonTimeline__Class** type_info;
        inline app::VirtualMoonTimeline__Class* get_class() {
            return il2cpp::get_class<app::VirtualMoonTimeline__Class>(type_info, "Moon.Timeline", "VirtualMoonTimeline");
        }
        inline app::VirtualMoonTimeline* create() {
            return il2cpp::create_object<app::VirtualMoonTimeline>(get_class());
        }
    } // namespace VirtualMoonTimeline
} // namespace app::classes::types
