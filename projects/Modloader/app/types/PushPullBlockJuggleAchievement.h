#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PushPullBlockJuggleAchievement {
        namespace {
            inline app::PushPullBlockJuggleAchievement__Class* type_info_ref = nullptr;
        }
        inline app::PushPullBlockJuggleAchievement__Class** type_info = &type_info_ref;
        inline app::PushPullBlockJuggleAchievement__Class* get_class() {
            return il2cpp::get_class<app::PushPullBlockJuggleAchievement__Class>(type_info, "", "PushPullBlockJuggleAchievement");
        }
        inline app::PushPullBlockJuggleAchievement* create() {
            return il2cpp::create_object<app::PushPullBlockJuggleAchievement>(get_class());
        }
    } // namespace PushPullBlockJuggleAchievement
} // namespace app::classes::types
