#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineInterruptionAnimatorEntity {
        namespace {
            inline app::TimelineInterruptionAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::TimelineInterruptionAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::TimelineInterruptionAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::TimelineInterruptionAnimatorEntity__Class>(type_info, "Moon.Timeline", "TimelineInterruptionAnimatorEntity");
        }
        inline app::TimelineInterruptionAnimatorEntity* create() {
            return il2cpp::create_object<app::TimelineInterruptionAnimatorEntity>(get_class());
        }
    } // namespace TimelineInterruptionAnimatorEntity
} // namespace app::classes::types
