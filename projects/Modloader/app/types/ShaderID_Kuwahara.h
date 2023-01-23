#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_Kuwahara__Class.h>
#include <Modloader/app/structs/ShaderID_Kuwahara.h>

namespace app::classes::types {
    namespace ShaderID_Kuwahara {
        inline app::ShaderID_Kuwahara__Class** type_info = (app::ShaderID_Kuwahara__Class**)(modloader::win::memory::resolve_rva(0x04733908));
        inline app::ShaderID_Kuwahara__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Kuwahara__Class>(type_info, "Colorful", "ShaderID_Kuwahara");
        }
        inline app::ShaderID_Kuwahara* create() {
            return il2cpp::create_object<app::ShaderID_Kuwahara>(get_class());
        }
    } // namespace ShaderID_Kuwahara
} // namespace app::classes::types
