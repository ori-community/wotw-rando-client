#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BoolCondition {
        namespace {
            inline app::BoolCondition__Class* type_info_ref = nullptr;
        }
        inline app::BoolCondition__Class** type_info = &type_info_ref;
        inline app::BoolCondition__Class* get_class() {
            return il2cpp::get_class<app::BoolCondition__Class>(type_info, "", "BoolCondition");
        }
        inline app::BoolCondition* create() {
            return il2cpp::create_object<app::BoolCondition>(get_class());
        }
    } // namespace BoolCondition
} // namespace app::classes::types
