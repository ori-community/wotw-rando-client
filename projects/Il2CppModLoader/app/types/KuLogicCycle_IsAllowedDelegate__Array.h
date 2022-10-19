#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuLogicCycle_IsAllowedDelegate__Array {
        namespace {
            inline app::KuLogicCycle_IsAllowedDelegate__Array__Class* type_info_ref = nullptr;
        }
        inline app::KuLogicCycle_IsAllowedDelegate__Array__Class** type_info = &type_info_ref;
        inline app::KuLogicCycle_IsAllowedDelegate__Array__Class* get_class() {
            return il2cpp::get_class<app::KuLogicCycle_IsAllowedDelegate__Array__Class>(type_info, "", "KuLogicCycle+IsAllowedDelegate[]");
        }
        inline app::KuLogicCycle_IsAllowedDelegate__Array* create() {
            return il2cpp::create_object<app::KuLogicCycle_IsAllowedDelegate__Array>(get_class());
        }
    } // namespace KuLogicCycle_IsAllowedDelegate__Array
} // namespace app::classes::types
