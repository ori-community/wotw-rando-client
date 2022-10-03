#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CullingGroupEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CullingGroupEvent__Class** type_info;
        inline app::CullingGroupEvent__Class* get_class() {
            return il2cpp::get_class<app::CullingGroupEvent__Class>(type_info, "UnityEngine", "CullingGroupEvent");
        }
        inline app::CullingGroupEvent* create() {
            return il2cpp::create_object<app::CullingGroupEvent>(get_class());
        }
        inline app::CullingGroupEvent__Boxed* box(app::CullingGroupEvent value) {
            return il2cpp::box_value<app::CullingGroupEvent__Boxed>(get_class(), value);
        }
    } // namespace CullingGroupEvent
} // namespace app::classes::types
