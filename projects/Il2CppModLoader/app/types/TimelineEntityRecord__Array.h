#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineEntityRecord__Array {
        namespace {
            app::TimelineEntityRecord__Array__Class* type_info_ref = nullptr;
        }
        app::TimelineEntityRecord__Array__Class** type_info = &type_info_ref;
        inline app::TimelineEntityRecord__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityRecord__Array__Class>(type_info, "Moon.Timeline", "TimelineEntityRecord[]");
        }
        inline app::TimelineEntityRecord__Array* create() {
            return il2cpp::create_object<app::TimelineEntityRecord__Array>(get_class());
        }
    } // namespace TimelineEntityRecord__Array
} // namespace app::classes::types
