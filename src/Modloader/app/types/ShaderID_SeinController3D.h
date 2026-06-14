#pragma once
#include <Modloader/app/structs/ShaderID_SeinController3D.h>
#include <Modloader/app/structs/ShaderID_SeinController3D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SeinController3D {
        inline app::ShaderID_SeinController3D__Class** type_info() {
            static app::ShaderID_SeinController3D__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_SeinController3D__Class**)(modloader::win::memory::resolve_rva(0x04786A08));
            }
            return cache;
        }
        inline app::ShaderID_SeinController3D__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SeinController3D__Class>(type_info(), "", "ShaderID_SeinController3D");
        }
        inline app::ShaderID_SeinController3D* create() {
            return il2cpp::create_object<app::ShaderID_SeinController3D>(get_class());
        }
    } // namespace ShaderID_SeinController3D
} // namespace app::classes::types
