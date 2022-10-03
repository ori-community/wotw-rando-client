#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForTimeTimelineEntity {
        namespace {
            app::WaitForTimeTimelineEntity__Class* type_info_ref = nullptr;
        }
        app::WaitForTimeTimelineEntity__Class** type_info = &type_info_ref;
        inline app::WaitForTimeTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForTimeTimelineEntity__Class>(type_info, "Moon.Timeline", "WaitForTimeTimelineEntity");
        }
        inline app::WaitForTimeTimelineEntity* create() {
            return il2cpp::create_object<app::WaitForTimeTimelineEntity>(get_class());
        }
    } // namespace WaitForTimeTimelineEntity
} // namespace app::classes::types
