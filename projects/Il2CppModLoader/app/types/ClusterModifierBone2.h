#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClusterModifierBone2 {
        namespace {
            inline app::ClusterModifierBone2__Class* type_info_ref = nullptr;
        }
        inline app::ClusterModifierBone2__Class** type_info = &type_info_ref;
        inline app::ClusterModifierBone2__Class* get_class() {
            return il2cpp::get_class<app::ClusterModifierBone2__Class>(type_info, "", "ClusterModifierBone2");
        }
        inline app::ClusterModifierBone2* create() {
            return il2cpp::create_object<app::ClusterModifierBone2>(get_class());
        }
    } // namespace ClusterModifierBone2
} // namespace app::classes::types
