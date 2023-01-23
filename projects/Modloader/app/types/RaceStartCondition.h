#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceStartCondition__Class.h>
#include <Modloader/app/structs/RaceStartCondition.h>

namespace app::classes::types {
    namespace RaceStartCondition {
        namespace {
            inline app::RaceStartCondition__Class* type_info_ref = nullptr;
        }
        inline app::RaceStartCondition__Class** type_info = &type_info_ref;
        inline app::RaceStartCondition__Class* get_class() {
            return il2cpp::get_class<app::RaceStartCondition__Class>(type_info, "", "RaceStartCondition");
        }
        inline app::RaceStartCondition* create() {
            return il2cpp::create_object<app::RaceStartCondition>(get_class());
        }
    } // namespace RaceStartCondition
} // namespace app::classes::types
