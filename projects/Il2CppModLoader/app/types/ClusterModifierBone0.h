#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClusterModifierBone0 {
        namespace {
            inline app::ClusterModifierBone0__Class* type_info_ref = nullptr;
        }
        inline app::ClusterModifierBone0__Class** type_info = &type_info_ref;
        inline app::ClusterModifierBone0__Class* get_class() {
            return il2cpp::get_class<app::ClusterModifierBone0__Class>(type_info, "", "ClusterModifierBone0");
        }
        inline app::ClusterModifierBone0* create() {
            return il2cpp::create_object<app::ClusterModifierBone0>(get_class());
        }
    } // namespace ClusterModifierBone0
} // namespace app::classes::types
