#pragma once
#include <Modloader/app/structs/ShaderID_FPSCharacter.h>
#include <Modloader/app/structs/ShaderID_FPSCharacter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_FPSCharacter {
        inline app::ShaderID_FPSCharacter__Class** type_info() {
            static app::ShaderID_FPSCharacter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_FPSCharacter__Class**)(modloader::win::memory::resolve_rva(0x0472E9B8));
            }
            return cache;
        }
        inline app::ShaderID_FPSCharacter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FPSCharacter__Class>(type_info(), "RootMotion.Demos", "ShaderID_FPSCharacter");
        }
        inline app::ShaderID_FPSCharacter* create() {
            return il2cpp::create_object<app::ShaderID_FPSCharacter>(get_class());
        }
    } // namespace ShaderID_FPSCharacter
} // namespace app::classes::types
