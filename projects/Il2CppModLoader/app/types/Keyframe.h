#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Keyframe {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Keyframe__Class** type_info;
        inline app::Keyframe__Class* get_class() {
            return il2cpp::get_class<app::Keyframe__Class>(type_info, "UnityEngine", "Keyframe");
        }
        inline app::Keyframe* create() {
            return il2cpp::create_object<app::Keyframe>(get_class());
        }
        inline app::Keyframe__Boxed* box(app::Keyframe value) {
            return il2cpp::box_value<app::Keyframe__Boxed>(get_class(), value);
        }
        inline app::Keyframe__Array* create_array(int size) {
            return il2cpp::array_new<app::Keyframe__Array>(get_class(), size);
        }
        inline app::Keyframe__Array* create_array(const std::vector<app::Keyframe__Boxed>& items) {
            return il2cpp::array_new<app::Keyframe__Array>(get_class(), items);
        }
    } // namespace Keyframe
} // namespace app::classes::types
