#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PositionCondition {
        namespace {
            inline app::PositionCondition__Class* type_info_ref = nullptr;
        }
        inline app::PositionCondition__Class** type_info = &type_info_ref;
        inline app::PositionCondition__Class* get_class() {
            return il2cpp::get_class<app::PositionCondition__Class>(type_info, "", "PositionCondition");
        }
        inline app::PositionCondition* create() {
            return il2cpp::create_object<app::PositionCondition>(get_class());
        }
    } // namespace PositionCondition
} // namespace app::classes::types
