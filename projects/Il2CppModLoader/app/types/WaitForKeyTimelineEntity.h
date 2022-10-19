#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitForKeyTimelineEntity {
        namespace {
            inline app::WaitForKeyTimelineEntity__Class* type_info_ref = nullptr;
        }
        inline app::WaitForKeyTimelineEntity__Class** type_info = &type_info_ref;
        inline app::WaitForKeyTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForKeyTimelineEntity__Class>(type_info, "Moon.Timeline", "WaitForKeyTimelineEntity");
        }
        inline app::WaitForKeyTimelineEntity* create() {
            return il2cpp::create_object<app::WaitForKeyTimelineEntity>(get_class());
        }
    } // namespace WaitForKeyTimelineEntity
} // namespace app::classes::types
