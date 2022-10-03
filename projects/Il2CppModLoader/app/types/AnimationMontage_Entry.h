#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMontage_Entry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationMontage_Entry__Class** type_info;
        inline app::AnimationMontage_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMontage_Entry__Class>(type_info, "Moon", "AnimationMontage", "Entry");
        }
        inline app::AnimationMontage_Entry* create() {
            return il2cpp::create_object<app::AnimationMontage_Entry>(get_class());
        }
        inline app::AnimationMontage_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationMontage_Entry__Array>(get_class(), size);
        }
    } // namespace AnimationMontage_Entry
} // namespace app::classes::types
