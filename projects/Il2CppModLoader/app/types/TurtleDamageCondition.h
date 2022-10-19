#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleDamageCondition {
        namespace {
            inline app::TurtleDamageCondition__Class* type_info_ref = nullptr;
        }
        inline app::TurtleDamageCondition__Class** type_info = &type_info_ref;
        inline app::TurtleDamageCondition__Class* get_class() {
            return il2cpp::get_class<app::TurtleDamageCondition__Class>(type_info, "", "TurtleDamageCondition");
        }
        inline app::TurtleDamageCondition* create() {
            return il2cpp::create_object<app::TurtleDamageCondition>(get_class());
        }
    } // namespace TurtleDamageCondition
} // namespace app::classes::types
