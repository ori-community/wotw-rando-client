#pragma once
#include <Modloader/app/structs/XblAchievement__Array.h>
#include <Modloader/app/structs/XblAchievement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievement__Array {
        inline app::XblAchievement__Array__Class** type_info() {
            static app::XblAchievement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievement__Array__Class**)(modloader::win::memory::resolve_rva(0x0475FE50));
            }
            return cache;
        }
        inline app::XblAchievement__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievement__Array__Class>(type_info(), "XGamingRuntime", "XblAchievement[]");
        }
        inline app::XblAchievement__Array* create() {
            return il2cpp::create_object<app::XblAchievement__Array>(get_class());
        }
    } // namespace XblAchievement__Array
} // namespace app::classes::types
