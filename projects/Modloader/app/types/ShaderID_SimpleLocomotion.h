#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_SimpleLocomotion {
        inline app::ShaderID_SimpleLocomotion__Class** type_info = (app::ShaderID_SimpleLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04757820));
        inline app::ShaderID_SimpleLocomotion__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SimpleLocomotion__Class>(type_info, "RootMotion.Demos", "ShaderID_SimpleLocomotion");
        }
        inline app::ShaderID_SimpleLocomotion* create() {
            return il2cpp::create_object<app::ShaderID_SimpleLocomotion>(get_class());
        }
    } // namespace ShaderID_SimpleLocomotion
} // namespace app::classes::types
