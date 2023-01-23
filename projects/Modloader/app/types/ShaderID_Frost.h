#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_Frost__Class.h>
#include <Modloader/app/structs/ShaderID_Frost.h>

namespace app::classes::types {
    namespace ShaderID_Frost {
        inline app::ShaderID_Frost__Class** type_info = (app::ShaderID_Frost__Class**)(modloader::win::memory::resolve_rva(0x04790E58));
        inline app::ShaderID_Frost__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Frost__Class>(type_info, "Colorful", "ShaderID_Frost");
        }
        inline app::ShaderID_Frost* create() {
            return il2cpp::create_object<app::ShaderID_Frost>(get_class());
        }
    } // namespace ShaderID_Frost
} // namespace app::classes::types
