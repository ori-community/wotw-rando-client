#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_IntElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationTester_IntElement__Class** type_info;
        inline app::AnimationTester_IntElement__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_IntElement__Class>(type_info, "", "AnimationTester", "IntElement");
        }
        inline app::AnimationTester_IntElement* create() {
            return il2cpp::create_object<app::AnimationTester_IntElement>(get_class());
        }
    } // namespace AnimationTester_IntElement
} // namespace app::classes::types
