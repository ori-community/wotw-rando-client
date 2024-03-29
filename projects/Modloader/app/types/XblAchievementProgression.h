#pragma once
#include <Modloader/app/structs/XblAchievementProgression.h>
#include <Modloader/app/structs/XblAchievementProgression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementProgression {
        inline app::XblAchievementProgression__Class** type_info() {
            static app::XblAchievementProgression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievementProgression__Class**)(modloader::win::memory::resolve_rva(0x0476DDB8));
            }
            return cache;
        }
        inline app::XblAchievementProgression__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementProgression__Class>(type_info(), "XGamingRuntime", "XblAchievementProgression");
        }
        inline app::XblAchievementProgression* create() {
            return il2cpp::create_object<app::XblAchievementProgression>(get_class());
        }
    } // namespace XblAchievementProgression
} // namespace app::classes::types
