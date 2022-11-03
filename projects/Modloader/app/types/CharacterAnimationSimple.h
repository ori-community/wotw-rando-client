#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterAnimationSimple {
        namespace {
            inline app::CharacterAnimationSimple__Class* type_info_ref = nullptr;
        }
        inline app::CharacterAnimationSimple__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationSimple__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationSimple__Class>(type_info, "RootMotion.Demos", "CharacterAnimationSimple");
        }
        inline app::CharacterAnimationSimple* create() {
            return il2cpp::create_object<app::CharacterAnimationSimple>(get_class());
        }
    } // namespace CharacterAnimationSimple
} // namespace app::classes::types
