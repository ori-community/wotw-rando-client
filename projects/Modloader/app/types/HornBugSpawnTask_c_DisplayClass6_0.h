#pragma once
#include <Modloader/app/structs/HornBugSpawnTask_c_DisplayClass6_0.h>
#include <Modloader/app/structs/HornBugSpawnTask_c_DisplayClass6_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugSpawnTask_c_DisplayClass6_0 {
        inline app::HornBugSpawnTask_c_DisplayClass6_0__Class** type_info() {
            static app::HornBugSpawnTask_c_DisplayClass6_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HornBugSpawnTask_c_DisplayClass6_0__Class**)(modloader::win::memory::resolve_rva(0x0471F708));
            }
            return cache;
        }
        inline app::HornBugSpawnTask_c_DisplayClass6_0__Class* get_class() {
            return il2cpp::get_nested_class<app::HornBugSpawnTask_c_DisplayClass6_0__Class>(type_info(), "", "HornBugSpawnTask", "<>c__DisplayClass6_0");
        }
        inline app::HornBugSpawnTask_c_DisplayClass6_0* create() {
            return il2cpp::create_object<app::HornBugSpawnTask_c_DisplayClass6_0>(get_class());
        }
    } // namespace HornBugSpawnTask_c_DisplayClass6_0
} // namespace app::classes::types
