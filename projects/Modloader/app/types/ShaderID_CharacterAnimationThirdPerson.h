#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CharacterAnimationThirdPerson__Class.h>
#include <Modloader/app/structs/ShaderID_CharacterAnimationThirdPerson.h>

namespace app::classes::types {
    namespace ShaderID_CharacterAnimationThirdPerson {
        inline app::ShaderID_CharacterAnimationThirdPerson__Class** type_info = (app::ShaderID_CharacterAnimationThirdPerson__Class**)(modloader::win::memory::resolve_rva(0x047222E8));
        inline app::ShaderID_CharacterAnimationThirdPerson__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CharacterAnimationThirdPerson__Class>(type_info, "RootMotion.Demos", "ShaderID_CharacterAnimationThirdPerson");
        }
        inline app::ShaderID_CharacterAnimationThirdPerson* create() {
            return il2cpp::create_object<app::ShaderID_CharacterAnimationThirdPerson>(get_class());
        }
    } // namespace ShaderID_CharacterAnimationThirdPerson
} // namespace app::classes::types
