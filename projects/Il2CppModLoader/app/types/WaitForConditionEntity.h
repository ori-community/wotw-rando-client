#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitForConditionEntity {
        namespace {
            inline app::WaitForConditionEntity__Class* type_info_ref = nullptr;
        }
        inline app::WaitForConditionEntity__Class** type_info = &type_info_ref;
        inline app::WaitForConditionEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForConditionEntity__Class>(type_info, "Moon.Timeline", "WaitForConditionEntity");
        }
        inline app::WaitForConditionEntity* create() {
            return il2cpp::create_object<app::WaitForConditionEntity>(get_class());
        }
    } // namespace WaitForConditionEntity
} // namespace app::classes::types
