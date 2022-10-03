#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchJointsJob {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MatchJointsJob__Class** type_info;
        inline app::MatchJointsJob__Class* get_class() {
            return il2cpp::get_class<app::MatchJointsJob__Class>(type_info, "Moon.Animation", "MatchJointsJob");
        }
        inline app::MatchJointsJob* create() {
            return il2cpp::create_object<app::MatchJointsJob>(get_class());
        }
        inline app::MatchJointsJob__Boxed* box(app::MatchJointsJob value) {
            return il2cpp::box_value<app::MatchJointsJob__Boxed>(get_class(), value);
        }
    } // namespace MatchJointsJob
} // namespace app::classes::types
