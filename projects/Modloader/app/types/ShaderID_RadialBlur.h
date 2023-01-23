#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_RadialBlur__Class.h>
#include <Modloader/app/structs/ShaderID_RadialBlur.h>

namespace app::classes::types {
    namespace ShaderID_RadialBlur {
        inline app::ShaderID_RadialBlur__Class** type_info = (app::ShaderID_RadialBlur__Class**)(modloader::win::memory::resolve_rva(0x0472EFC8));
        inline app::ShaderID_RadialBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_RadialBlur__Class>(type_info, "Colorful", "ShaderID_RadialBlur");
        }
        inline app::ShaderID_RadialBlur* create() {
            return il2cpp::create_object<app::ShaderID_RadialBlur>(get_class());
        }
    } // namespace ShaderID_RadialBlur
} // namespace app::classes::types
