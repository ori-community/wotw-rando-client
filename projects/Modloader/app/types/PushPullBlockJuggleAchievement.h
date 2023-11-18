#pragma once
#include <Modloader/app/structs/PushPullBlockJuggleAchievement.h>
#include <Modloader/app/structs/PushPullBlockJuggleAchievement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushPullBlockJuggleAchievement {
        inline app::PushPullBlockJuggleAchievement__Class** type_info() {
            static app::PushPullBlockJuggleAchievement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PushPullBlockJuggleAchievement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PushPullBlockJuggleAchievement__Class* get_class() {
            return il2cpp::get_class<app::PushPullBlockJuggleAchievement__Class>(type_info(), "", "PushPullBlockJuggleAchievement");
        }
        inline app::PushPullBlockJuggleAchievement* create() {
            return il2cpp::create_object<app::PushPullBlockJuggleAchievement>(get_class());
        }
    } // namespace PushPullBlockJuggleAchievement
} // namespace app::classes::types
