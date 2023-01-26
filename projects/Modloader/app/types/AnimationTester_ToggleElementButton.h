#pragma once
#include <Modloader/app/structs/AnimationTester_ToggleElementButton.h>
#include <Modloader/app/structs/AnimationTester_ToggleElementButton__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_ToggleElementButton {
        inline app::AnimationTester_ToggleElementButton__Class** type_info() {
            static app::AnimationTester_ToggleElementButton__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationTester_ToggleElementButton__Class**)(modloader::win::memory::resolve_rva(0x04792B28));
            }
            return cache;
        }
        inline app::AnimationTester_ToggleElementButton__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_ToggleElementButton__Class>(type_info(), "", "AnimationTester", "ToggleElementButton");
        }
        inline app::AnimationTester_ToggleElementButton* create() {
            return il2cpp::create_object<app::AnimationTester_ToggleElementButton>(get_class());
        }
    } // namespace AnimationTester_ToggleElementButton
} // namespace app::classes::types
