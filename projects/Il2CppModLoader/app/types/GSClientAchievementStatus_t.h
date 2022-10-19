#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GSClientAchievementStatus_t {
        namespace {
            inline app::GSClientAchievementStatus_t__Class* type_info_ref = nullptr;
        }
        inline app::GSClientAchievementStatus_t__Class** type_info = &type_info_ref;
        inline app::GSClientAchievementStatus_t__Class* get_class() {
            return il2cpp::get_class<app::GSClientAchievementStatus_t__Class>(type_info, "Steamworks", "GSClientAchievementStatus_t");
        }
        inline app::GSClientAchievementStatus_t* create() {
            return il2cpp::create_object<app::GSClientAchievementStatus_t>(get_class());
        }
        inline app::GSClientAchievementStatus_t__Boxed* box(app::GSClientAchievementStatus_t value) {
            return il2cpp::box_value<app::GSClientAchievementStatus_t__Boxed>(get_class(), value);
        }
    } // namespace GSClientAchievementStatus_t
} // namespace app::classes::types
