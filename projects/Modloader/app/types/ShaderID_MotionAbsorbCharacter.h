#pragma once
#include <Modloader/app/structs/ShaderID_MotionAbsorbCharacter.h>
#include <Modloader/app/structs/ShaderID_MotionAbsorbCharacter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_MotionAbsorbCharacter {
        inline app::ShaderID_MotionAbsorbCharacter__Class** type_info() {
            static app::ShaderID_MotionAbsorbCharacter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_MotionAbsorbCharacter__Class**)(modloader::win::memory::resolve_rva(0x04779978));
            }
            return cache;
        }
        inline app::ShaderID_MotionAbsorbCharacter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_MotionAbsorbCharacter__Class>(type_info(), "RootMotion.Demos", "ShaderID_MotionAbsorbCharacter");
        }
        inline app::ShaderID_MotionAbsorbCharacter* create() {
            return il2cpp::create_object<app::ShaderID_MotionAbsorbCharacter>(get_class());
        }
    } // namespace ShaderID_MotionAbsorbCharacter
} // namespace app::classes::types
