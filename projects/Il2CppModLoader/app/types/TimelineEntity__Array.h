#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineEntity__Array {
        namespace {
            inline app::TimelineEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::TimelineEntity__Array__Class** type_info = &type_info_ref;
        inline app::TimelineEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntity__Array__Class>(type_info, "Moon.Timeline", "TimelineEntity[]");
        }
        inline app::TimelineEntity__Array* create() {
            return il2cpp::create_object<app::TimelineEntity__Array>(get_class());
        }
    } // namespace TimelineEntity__Array
} // namespace app::classes::types
