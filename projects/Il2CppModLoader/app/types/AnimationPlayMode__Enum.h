#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationPlayMode__Enum {
        namespace {
            app::AnimationPlayMode__Enum__Class* type_info_ref = nullptr;
        }
        app::AnimationPlayMode__Enum__Class** type_info = &type_info_ref;
        inline app::AnimationPlayMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimationPlayMode__Enum__Class>(type_info, "UnityEngine", "AnimationPlayMode");
        }
        inline app::AnimationPlayMode__Enum* create() {
            return il2cpp::create_object<app::AnimationPlayMode__Enum>(get_class());
        }
    } // namespace AnimationPlayMode__Enum
} // namespace app::classes::types
