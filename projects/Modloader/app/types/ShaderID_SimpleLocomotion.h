#pragma once
#include <Modloader/app/structs/ShaderID_SimpleLocomotion.h>
#include <Modloader/app/structs/ShaderID_SimpleLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SimpleLocomotion {
        inline app::ShaderID_SimpleLocomotion__Class** type_info() {
            static app::ShaderID_SimpleLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_SimpleLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04757820));
            }
            return cache;
        }
        inline app::ShaderID_SimpleLocomotion__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SimpleLocomotion__Class>(type_info(), "RootMotion.Demos", "ShaderID_SimpleLocomotion");
        }
        inline app::ShaderID_SimpleLocomotion* create() {
            return il2cpp::create_object<app::ShaderID_SimpleLocomotion>(get_class());
        }
    } // namespace ShaderID_SimpleLocomotion
} // namespace app::classes::types
