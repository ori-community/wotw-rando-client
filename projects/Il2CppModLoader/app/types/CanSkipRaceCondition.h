#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanSkipRaceCondition {
        namespace {
            inline app::CanSkipRaceCondition__Class* type_info_ref = nullptr;
        }
        inline app::CanSkipRaceCondition__Class** type_info = &type_info_ref;
        inline app::CanSkipRaceCondition__Class* get_class() {
            return il2cpp::get_class<app::CanSkipRaceCondition__Class>(type_info, "Moon.Race", "CanSkipRaceCondition");
        }
        inline app::CanSkipRaceCondition* create() {
            return il2cpp::create_object<app::CanSkipRaceCondition>(get_class());
        }
    } // namespace CanSkipRaceCondition
} // namespace app::classes::types
