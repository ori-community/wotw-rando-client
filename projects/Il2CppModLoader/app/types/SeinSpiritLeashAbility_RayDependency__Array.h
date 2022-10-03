#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritLeashAbility_RayDependency__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinSpiritLeashAbility_RayDependency__Array__Class** type_info;
        inline app::SeinSpiritLeashAbility_RayDependency__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritLeashAbility_RayDependency__Array__Class>(type_info, "", "SeinSpiritLeashAbility+RayDependency[]");
        }
        inline app::SeinSpiritLeashAbility_RayDependency__Array* create() {
            return il2cpp::create_object<app::SeinSpiritLeashAbility_RayDependency__Array>(get_class());
        }
    } // namespace SeinSpiritLeashAbility_RayDependency__Array
} // namespace app::classes::types
