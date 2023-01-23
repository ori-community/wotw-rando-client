#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_Posterize__Class.h>
#include <Modloader/app/structs/ShaderID_Posterize.h>

namespace app::classes::types {
    namespace ShaderID_Posterize {
        inline app::ShaderID_Posterize__Class** type_info = (app::ShaderID_Posterize__Class**)(modloader::win::memory::resolve_rva(0x04762DC0));
        inline app::ShaderID_Posterize__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Posterize__Class>(type_info, "Colorful", "ShaderID_Posterize");
        }
        inline app::ShaderID_Posterize* create() {
            return il2cpp::create_object<app::ShaderID_Posterize>(get_class());
        }
    } // namespace ShaderID_Posterize
} // namespace app::classes::types
