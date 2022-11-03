#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RacesEnabledCondition {
        namespace {
            inline app::RacesEnabledCondition__Class* type_info_ref = nullptr;
        }
        inline app::RacesEnabledCondition__Class** type_info = &type_info_ref;
        inline app::RacesEnabledCondition__Class* get_class() {
            return il2cpp::get_class<app::RacesEnabledCondition__Class>(type_info, "", "RacesEnabledCondition");
        }
        inline app::RacesEnabledCondition* create() {
            return il2cpp::create_object<app::RacesEnabledCondition>(get_class());
        }
    } // namespace RacesEnabledCondition
} // namespace app::classes::types
