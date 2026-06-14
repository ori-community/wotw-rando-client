#pragma once
#include <Modloader/app/structs/ShaderID_VRAnimatorController.h>
#include <Modloader/app/structs/ShaderID_VRAnimatorController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_VRAnimatorController {
        inline app::ShaderID_VRAnimatorController__Class** type_info() {
            static app::ShaderID_VRAnimatorController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_VRAnimatorController__Class**)(modloader::win::memory::resolve_rva(0x04788E98));
            }
            return cache;
        }
        inline app::ShaderID_VRAnimatorController__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_VRAnimatorController__Class>(type_info(), "RootMotion.Demos", "ShaderID_VRAnimatorController");
        }
        inline app::ShaderID_VRAnimatorController* create() {
            return il2cpp::create_object<app::ShaderID_VRAnimatorController>(get_class());
        }
    } // namespace ShaderID_VRAnimatorController
} // namespace app::classes::types
