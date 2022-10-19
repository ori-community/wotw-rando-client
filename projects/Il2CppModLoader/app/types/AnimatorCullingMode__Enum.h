#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimatorCullingMode__Enum {
        namespace {
            inline app::AnimatorCullingMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AnimatorCullingMode__Enum__Class** type_info = &type_info_ref;
        inline app::AnimatorCullingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimatorCullingMode__Enum__Class>(type_info, "UnityEngine", "AnimatorCullingMode");
        }
        inline app::AnimatorCullingMode__Enum* create() {
            return il2cpp::create_object<app::AnimatorCullingMode__Enum>(get_class());
        }
    } // namespace AnimatorCullingMode__Enum
} // namespace app::classes::types
