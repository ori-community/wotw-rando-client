#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_IIntUiElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationTester_IIntUiElement__Class** type_info;
        inline app::AnimationTester_IIntUiElement__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_IIntUiElement__Class>(type_info, "", "AnimationTester", "IIntUiElement");
        }
        inline app::AnimationTester_IIntUiElement* create() {
            return il2cpp::create_object<app::AnimationTester_IIntUiElement>(get_class());
        }
    } // namespace AnimationTester_IIntUiElement
} // namespace app::classes::types
