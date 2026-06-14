#pragma once
#include <Modloader/app/structs/AnimationTester_IntElement.h>
#include <Modloader/app/structs/AnimationTester_IntElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_IntElement {
        inline app::AnimationTester_IntElement__Class** type_info() {
            static app::AnimationTester_IntElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationTester_IntElement__Class**)(modloader::win::memory::resolve_rva(0x04731550));
            }
            return cache;
        }
        inline app::AnimationTester_IntElement__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_IntElement__Class>(type_info(), "", "AnimationTester", "IntElement");
        }
        inline app::AnimationTester_IntElement* create() {
            return il2cpp::create_object<app::AnimationTester_IntElement>(get_class());
        }
    } // namespace AnimationTester_IntElement
} // namespace app::classes::types
