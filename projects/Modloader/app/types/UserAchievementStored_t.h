#pragma once
#include <Modloader/app/structs/UserAchievementStored_t.h>
#include <Modloader/app/structs/UserAchievementStored_t__Boxed.h>
#include <Modloader/app/structs/UserAchievementStored_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserAchievementStored_t {
        inline app::UserAchievementStored_t__Class** type_info() {
            static app::UserAchievementStored_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserAchievementStored_t__Class**)(modloader::win::memory::resolve_rva(0x047961B0));
            }
            return cache;
        }
        inline app::UserAchievementStored_t__Class* get_class() {
            return il2cpp::get_class<app::UserAchievementStored_t__Class>(type_info(), "Steamworks", "UserAchievementStored_t");
        }
        inline app::UserAchievementStored_t* create() {
            return il2cpp::create_object<app::UserAchievementStored_t>(get_class());
        }
        inline app::UserAchievementStored_t__Boxed* box(app::UserAchievementStored_t value) {
            return il2cpp::box_value<app::UserAchievementStored_t__Boxed>(get_class(), value);
        }
    } // namespace UserAchievementStored_t
} // namespace app::classes::types
