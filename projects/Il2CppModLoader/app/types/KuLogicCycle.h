#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuLogicCycle {
        namespace {
            inline app::KuLogicCycle__Class* type_info_ref = nullptr;
        }
        inline app::KuLogicCycle__Class** type_info = &type_info_ref;
        inline app::KuLogicCycle__Class* get_class() {
            return il2cpp::get_class<app::KuLogicCycle__Class>(type_info, "", "KuLogicCycle");
        }
        inline app::KuLogicCycle* create() {
            return il2cpp::create_object<app::KuLogicCycle>(get_class());
        }
    } // namespace KuLogicCycle
} // namespace app::classes::types
