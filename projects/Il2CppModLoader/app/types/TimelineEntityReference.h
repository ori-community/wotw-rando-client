#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineEntityReference {
        namespace {
            app::TimelineEntityReference__Class* type_info_ref = nullptr;
        }
        app::TimelineEntityReference__Class** type_info = &type_info_ref;
        inline app::TimelineEntityReference__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityReference__Class>(type_info, "Moon.Timeline", "TimelineEntityReference");
        }
        inline app::TimelineEntityReference* create() {
            return il2cpp::create_object<app::TimelineEntityReference>(get_class());
        }
    } // namespace TimelineEntityReference
} // namespace app::classes::types
