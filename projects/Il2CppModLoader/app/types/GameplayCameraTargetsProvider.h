#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplayCameraTargetsProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameplayCameraTargetsProvider__Class** type_info;
        inline app::GameplayCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::GameplayCameraTargetsProvider__Class>(type_info, "", "GameplayCameraTargetsProvider");
        }
        inline app::GameplayCameraTargetsProvider* create() {
            return il2cpp::create_object<app::GameplayCameraTargetsProvider>(get_class());
        }
    } // namespace GameplayCameraTargetsProvider
} // namespace app::classes::types
