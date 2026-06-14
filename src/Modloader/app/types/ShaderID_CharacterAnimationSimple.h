#pragma once
#include <Modloader/app/structs/ShaderID_CharacterAnimationSimple.h>
#include <Modloader/app/structs/ShaderID_CharacterAnimationSimple__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CharacterAnimationSimple {
        inline app::ShaderID_CharacterAnimationSimple__Class** type_info() {
            static app::ShaderID_CharacterAnimationSimple__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CharacterAnimationSimple__Class**)(modloader::win::memory::resolve_rva(0x0473F480));
            }
            return cache;
        }
        inline app::ShaderID_CharacterAnimationSimple__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CharacterAnimationSimple__Class>(type_info(), "RootMotion.Demos", "ShaderID_CharacterAnimationSimple");
        }
        inline app::ShaderID_CharacterAnimationSimple* create() {
            return il2cpp::create_object<app::ShaderID_CharacterAnimationSimple>(get_class());
        }
    } // namespace ShaderID_CharacterAnimationSimple
} // namespace app::classes::types
