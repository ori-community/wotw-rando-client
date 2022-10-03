#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo_TransitionTime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeZoneInfo_TransitionTime__Class** type_info;
        inline app::TimeZoneInfo_TransitionTime__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_TransitionTime__Class>(type_info, "System", "TimeZoneInfo", "TransitionTime");
        }
        inline app::TimeZoneInfo_TransitionTime* create() {
            return il2cpp::create_object<app::TimeZoneInfo_TransitionTime>(get_class());
        }
        inline app::TimeZoneInfo_TransitionTime__Boxed* box(app::TimeZoneInfo_TransitionTime value) {
            return il2cpp::box_value<app::TimeZoneInfo_TransitionTime__Boxed>(get_class(), value);
        }
    } // namespace TimeZoneInfo_TransitionTime
} // namespace app::classes::types
