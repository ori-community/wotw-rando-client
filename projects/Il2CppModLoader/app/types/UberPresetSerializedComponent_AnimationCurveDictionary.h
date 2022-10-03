#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_AnimationCurveDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPresetSerializedComponent_AnimationCurveDictionary__Class** type_info;
        inline app::UberPresetSerializedComponent_AnimationCurveDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_AnimationCurveDictionary__Class>(type_info, "", "UberPresetSerializedComponent", "AnimationCurveDictionary");
        }
        inline app::UberPresetSerializedComponent_AnimationCurveDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_AnimationCurveDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_AnimationCurveDictionary
} // namespace app::classes::types
