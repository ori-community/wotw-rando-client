#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuildRunningHook {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuildRunningHook__Class** type_info;
        inline app::BuildRunningHook__Class* get_class() {
            return il2cpp::get_class<app::BuildRunningHook__Class>(type_info, "", "BuildRunningHook");
        }
        inline app::BuildRunningHook* create() {
            return il2cpp::create_object<app::BuildRunningHook>(get_class());
        }
    } // namespace BuildRunningHook
} // namespace app::classes::types
