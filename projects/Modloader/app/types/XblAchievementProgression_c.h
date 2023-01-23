#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XblAchievementProgression_c__Class.h>
#include <Modloader/app/structs/XblAchievementProgression_c.h>

namespace app::classes::types {
    namespace XblAchievementProgression_c {
        inline app::XblAchievementProgression_c__Class** type_info = (app::XblAchievementProgression_c__Class**)(modloader::win::memory::resolve_rva(0x04771DE8));
        inline app::XblAchievementProgression_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XblAchievementProgression_c__Class>(type_info, "XGamingRuntime", "XblAchievementProgression", "<>c");
        }
        inline app::XblAchievementProgression_c* create() {
            return il2cpp::create_object<app::XblAchievementProgression_c>(get_class());
        }
    } // namespace XblAchievementProgression_c
} // namespace app::classes::types
