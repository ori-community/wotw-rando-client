#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HealthCondition {
        namespace {
            inline app::HealthCondition__Class* type_info_ref = nullptr;
        }
        inline app::HealthCondition__Class** type_info = &type_info_ref;
        inline app::HealthCondition__Class* get_class() {
            return il2cpp::get_class<app::HealthCondition__Class>(type_info, "", "HealthCondition");
        }
        inline app::HealthCondition* create() {
            return il2cpp::create_object<app::HealthCondition>(get_class());
        }
    } // namespace HealthCondition
} // namespace app::classes::types
