#pragma once
#include <Modloader/app/structs/TeamCityHelper.h>
#include <Modloader/app/structs/TeamCityHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TeamCityHelper {
        inline app::TeamCityHelper__Class** type_info() {
            static app::TeamCityHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TeamCityHelper__Class**)(modloader::win::memory::resolve_rva(0x0471ACD8));
            }
            return cache;
        }
        inline app::TeamCityHelper__Class* get_class() {
            return il2cpp::get_class<app::TeamCityHelper__Class>(type_info(), "Moon.ContinuousIntegration", "TeamCityHelper");
        }
        inline app::TeamCityHelper* create() {
            return il2cpp::create_object<app::TeamCityHelper>(get_class());
        }
    } // namespace TeamCityHelper
} // namespace app::classes::types
