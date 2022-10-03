#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualMoonTimelineCustomGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VirtualMoonTimelineCustomGroup__Class** type_info;
        inline app::VirtualMoonTimelineCustomGroup__Class* get_class() {
            return il2cpp::get_class<app::VirtualMoonTimelineCustomGroup__Class>(type_info, "Moon.Timeline", "VirtualMoonTimelineCustomGroup");
        }
        inline app::VirtualMoonTimelineCustomGroup* create() {
            return il2cpp::create_object<app::VirtualMoonTimelineCustomGroup>(get_class());
        }
    } // namespace VirtualMoonTimelineCustomGroup
} // namespace app::classes::types
