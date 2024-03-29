#pragma once
#include <Modloader/app/structs/XblAchievement_c.h>
#include <Modloader/app/structs/XblAchievement_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievement_c {
        inline app::XblAchievement_c__Class** type_info() {
            static app::XblAchievement_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievement_c__Class**)(modloader::win::memory::resolve_rva(0x0473E6E0));
            }
            return cache;
        }
        inline app::XblAchievement_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XblAchievement_c__Class>(type_info(), "XGamingRuntime", "XblAchievement", "<>c");
        }
        inline app::XblAchievement_c* create() {
            return il2cpp::create_object<app::XblAchievement_c>(get_class());
        }
    } // namespace XblAchievement_c
} // namespace app::classes::types
