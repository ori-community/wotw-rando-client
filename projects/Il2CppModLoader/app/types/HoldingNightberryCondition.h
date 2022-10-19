#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HoldingNightberryCondition {
        namespace {
            inline app::HoldingNightberryCondition__Class* type_info_ref = nullptr;
        }
        inline app::HoldingNightberryCondition__Class** type_info = &type_info_ref;
        inline app::HoldingNightberryCondition__Class* get_class() {
            return il2cpp::get_class<app::HoldingNightberryCondition__Class>(type_info, "", "HoldingNightberryCondition");
        }
        inline app::HoldingNightberryCondition* create() {
            return il2cpp::create_object<app::HoldingNightberryCondition>(get_class());
        }
    } // namespace HoldingNightberryCondition
} // namespace app::classes::types
