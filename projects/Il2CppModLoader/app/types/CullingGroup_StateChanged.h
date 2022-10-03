#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CullingGroup_StateChanged {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CullingGroup_StateChanged__Class** type_info;
        inline app::CullingGroup_StateChanged__Class* get_class() {
            return il2cpp::get_nested_class<app::CullingGroup_StateChanged__Class>(type_info, "UnityEngine", "CullingGroup", "StateChanged");
        }
        inline app::CullingGroup_StateChanged* create() {
            return il2cpp::create_object<app::CullingGroup_StateChanged>(get_class());
        }
    } // namespace CullingGroup_StateChanged
} // namespace app::classes::types
