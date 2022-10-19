#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanRetryRaceCondition {
        namespace {
            inline app::CanRetryRaceCondition__Class* type_info_ref = nullptr;
        }
        inline app::CanRetryRaceCondition__Class** type_info = &type_info_ref;
        inline app::CanRetryRaceCondition__Class* get_class() {
            return il2cpp::get_class<app::CanRetryRaceCondition__Class>(type_info, "Moon.Race", "CanRetryRaceCondition");
        }
        inline app::CanRetryRaceCondition* create() {
            return il2cpp::create_object<app::CanRetryRaceCondition>(get_class());
        }
    } // namespace CanRetryRaceCondition
} // namespace app::classes::types
