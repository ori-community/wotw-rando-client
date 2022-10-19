#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompareVelocityCondition {
        namespace {
            inline app::CompareVelocityCondition__Class* type_info_ref = nullptr;
        }
        inline app::CompareVelocityCondition__Class** type_info = &type_info_ref;
        inline app::CompareVelocityCondition__Class* get_class() {
            return il2cpp::get_class<app::CompareVelocityCondition__Class>(type_info, "", "CompareVelocityCondition");
        }
        inline app::CompareVelocityCondition* create() {
            return il2cpp::create_object<app::CompareVelocityCondition>(get_class());
        }
    } // namespace CompareVelocityCondition
} // namespace app::classes::types
