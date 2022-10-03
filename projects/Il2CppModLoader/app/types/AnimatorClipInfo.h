#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorClipInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimatorClipInfo__Class** type_info;
        inline app::AnimatorClipInfo__Class* get_class() {
            return il2cpp::get_class<app::AnimatorClipInfo__Class>(type_info, "UnityEngine", "AnimatorClipInfo");
        }
        inline app::AnimatorClipInfo* create() {
            return il2cpp::create_object<app::AnimatorClipInfo>(get_class());
        }
        inline app::AnimatorClipInfo__Boxed* box(app::AnimatorClipInfo value) {
            return il2cpp::box_value<app::AnimatorClipInfo__Boxed>(get_class(), value);
        }
        inline app::AnimatorClipInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimatorClipInfo__Array>(get_class(), size);
        }
    } // namespace AnimatorClipInfo
} // namespace app::classes::types
