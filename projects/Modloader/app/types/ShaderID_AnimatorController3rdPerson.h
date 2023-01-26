#pragma once
#include <Modloader/app/structs/ShaderID_AnimatorController3rdPerson.h>
#include <Modloader/app/structs/ShaderID_AnimatorController3rdPerson__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_AnimatorController3rdPerson {
        inline app::ShaderID_AnimatorController3rdPerson__Class** type_info() {
            static app::ShaderID_AnimatorController3rdPerson__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_AnimatorController3rdPerson__Class**)(modloader::win::memory::resolve_rva(0x04774580));
            }
            return cache;
        }
        inline app::ShaderID_AnimatorController3rdPerson__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AnimatorController3rdPerson__Class>(type_info(), "RootMotion.Demos", "ShaderID_AnimatorController3rdPerson");
        }
        inline app::ShaderID_AnimatorController3rdPerson* create() {
            return il2cpp::create_object<app::ShaderID_AnimatorController3rdPerson>(get_class());
        }
    } // namespace ShaderID_AnimatorController3rdPerson
} // namespace app::classes::types
