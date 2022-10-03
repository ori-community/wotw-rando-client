#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualTimelineConstrainedTimelineEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VirtualTimelineConstrainedTimelineEntity__Class** type_info;
        inline app::VirtualTimelineConstrainedTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::VirtualTimelineConstrainedTimelineEntity__Class>(type_info, "Moon.Timeline", "VirtualTimelineConstrainedTimelineEntity");
        }
        inline app::VirtualTimelineConstrainedTimelineEntity* create() {
            return il2cpp::create_object<app::VirtualTimelineConstrainedTimelineEntity>(get_class());
        }
    } // namespace VirtualTimelineConstrainedTimelineEntity
} // namespace app::classes::types
