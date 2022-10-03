#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaData_FloatAnimation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationMetaData_FloatAnimation__Class** type_info;
        inline app::AnimationMetaData_FloatAnimation__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMetaData_FloatAnimation__Class>(type_info, "", "AnimationMetaData", "FloatAnimation");
        }
        inline app::AnimationMetaData_FloatAnimation* create() {
            return il2cpp::create_object<app::AnimationMetaData_FloatAnimation>(get_class());
        }
    } // namespace AnimationMetaData_FloatAnimation
} // namespace app::classes::types
