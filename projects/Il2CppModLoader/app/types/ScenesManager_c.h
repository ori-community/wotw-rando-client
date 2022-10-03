#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManager_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManager_c__Class** type_info;
        inline app::ScenesManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManager_c__Class>(type_info, "", "ScenesManager", "<>c");
        }
        inline app::ScenesManager_c* create() {
            return il2cpp::create_object<app::ScenesManager_c>(get_class());
        }
    } // namespace ScenesManager_c
} // namespace app::classes::types
