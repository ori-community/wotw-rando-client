#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationParameterSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationParameterSet__Class** type_info;
        inline app::AnimationParameterSet__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameterSet__Class>(type_info, "Moon", "AnimationParameterSet");
        }
        inline app::AnimationParameterSet* create() {
            return il2cpp::create_object<app::AnimationParameterSet>(get_class());
        }
    } // namespace AnimationParameterSet
} // namespace app::classes::types
