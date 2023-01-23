#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_SeinController3D__Class.h>
#include <Modloader/app/structs/ShaderID_SeinController3D.h>

namespace app::classes::types {
    namespace ShaderID_SeinController3D {
        inline app::ShaderID_SeinController3D__Class** type_info = (app::ShaderID_SeinController3D__Class**)(modloader::win::memory::resolve_rva(0x04786A08));
        inline app::ShaderID_SeinController3D__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SeinController3D__Class>(type_info, "", "ShaderID_SeinController3D");
        }
        inline app::ShaderID_SeinController3D* create() {
            return il2cpp::create_object<app::ShaderID_SeinController3D>(get_class());
        }
    } // namespace ShaderID_SeinController3D
} // namespace app::classes::types
