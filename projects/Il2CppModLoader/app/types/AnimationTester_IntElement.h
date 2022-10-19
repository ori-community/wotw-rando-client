#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationTester_IntElement {
        inline app::AnimationTester_IntElement__Class** type_info = (app::AnimationTester_IntElement__Class**)(modloader::win::memory::resolve_rva(0x04731550));
        inline app::AnimationTester_IntElement__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_IntElement__Class>(type_info, "", "AnimationTester", "IntElement");
        }
        inline app::AnimationTester_IntElement* create() {
            return il2cpp::create_object<app::AnimationTester_IntElement>(get_class());
        }
    } // namespace AnimationTester_IntElement
} // namespace app::classes::types
