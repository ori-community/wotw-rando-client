#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CullingGroup {
        namespace {
            inline app::CullingGroup__Class* type_info_ref = nullptr;
        }
        inline app::CullingGroup__Class** type_info = &type_info_ref;
        inline app::CullingGroup__Class* get_class() {
            return il2cpp::get_class<app::CullingGroup__Class>(type_info, "UnityEngine", "CullingGroup");
        }
        inline app::CullingGroup* create() {
            return il2cpp::create_object<app::CullingGroup>(get_class());
        }
    } // namespace CullingGroup
} // namespace app::classes::types
