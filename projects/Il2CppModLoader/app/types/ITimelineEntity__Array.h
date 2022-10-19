#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimelineEntity__Array {
        namespace {
            inline app::ITimelineEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::ITimelineEntity__Array__Class** type_info = &type_info_ref;
        inline app::ITimelineEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEntity__Array__Class>(type_info, "Moon.Timeline", "ITimelineEntity[]");
        }
        inline app::ITimelineEntity__Array* create() {
            return il2cpp::create_object<app::ITimelineEntity__Array>(get_class());
        }
    } // namespace ITimelineEntity__Array
} // namespace app::classes::types
