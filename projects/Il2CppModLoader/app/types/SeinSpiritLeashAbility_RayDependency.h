#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpiritLeashAbility_RayDependency {
        namespace {
            inline app::SeinSpiritLeashAbility_RayDependency__Class* type_info_ref = nullptr;
        }
        inline app::SeinSpiritLeashAbility_RayDependency__Class** type_info = &type_info_ref;
        inline app::SeinSpiritLeashAbility_RayDependency__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSpiritLeashAbility_RayDependency__Class>(type_info, "", "SeinSpiritLeashAbility", "RayDependency");
        }
        inline app::SeinSpiritLeashAbility_RayDependency* create() {
            return il2cpp::create_object<app::SeinSpiritLeashAbility_RayDependency>(get_class());
        }
        inline app::SeinSpiritLeashAbility_RayDependency__Boxed* box(app::SeinSpiritLeashAbility_RayDependency value) {
            return il2cpp::box_value<app::SeinSpiritLeashAbility_RayDependency__Boxed>(get_class(), value);
        }
        inline app::SeinSpiritLeashAbility_RayDependency__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinSpiritLeashAbility_RayDependency__Array>(get_class(), size);
        }
        inline app::SeinSpiritLeashAbility_RayDependency__Array* create_array(const std::vector<app::SeinSpiritLeashAbility_RayDependency>& items) {
            return il2cpp::array_new<app::SeinSpiritLeashAbility_RayDependency__Array>(get_class(), items);
        }
    } // namespace SeinSpiritLeashAbility_RayDependency
} // namespace app::classes::types
