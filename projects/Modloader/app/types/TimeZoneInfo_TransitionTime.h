#pragma once
#include <Modloader/app/structs/TimeZoneInfo_TransitionTime.h>
#include <Modloader/app/structs/TimeZoneInfo_TransitionTime__Boxed.h>
#include <Modloader/app/structs/TimeZoneInfo_TransitionTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo_TransitionTime {
        inline app::TimeZoneInfo_TransitionTime__Class** type_info() {
            static app::TimeZoneInfo_TransitionTime__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeZoneInfo_TransitionTime__Class**)(modloader::win::memory::resolve_rva(0x04781958));
            }
            return cache;
        }
        inline app::TimeZoneInfo_TransitionTime__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_TransitionTime__Class>(type_info(), "System", "TimeZoneInfo", "TransitionTime");
        }
        inline app::TimeZoneInfo_TransitionTime* create() {
            return il2cpp::create_object<app::TimeZoneInfo_TransitionTime>(get_class());
        }
        inline app::TimeZoneInfo_TransitionTime__Boxed* box(app::TimeZoneInfo_TransitionTime value) {
            return il2cpp::box_value<app::TimeZoneInfo_TransitionTime__Boxed>(get_class(), value);
        }
    } // namespace TimeZoneInfo_TransitionTime
} // namespace app::classes::types
