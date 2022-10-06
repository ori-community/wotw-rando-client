#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedDurationSceneEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FixedDurationSceneEntity__Class** type_info;
        inline app::FixedDurationSceneEntity__Class* get_class() {
            return il2cpp::get_class<app::FixedDurationSceneEntity__Class>(type_info, "Moon.Timeline", "FixedDurationSceneEntity");
        }
        inline app::FixedDurationSceneEntity* create() {
            return il2cpp::create_object<app::FixedDurationSceneEntity>(get_class());
        }
        inline app::FixedDurationSceneEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::FixedDurationSceneEntity__Array>(get_class(), size);
        }
        inline app::FixedDurationSceneEntity__Array* create_array(const std::vector<app::FixedDurationSceneEntity*>& items) {
            return il2cpp::array_new<app::FixedDurationSceneEntity__Array>(get_class(), items);
        }
    } // namespace FixedDurationSceneEntity
} // namespace app::classes::types
