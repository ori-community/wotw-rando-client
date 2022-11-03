#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Threshold {
        inline app::ShaderID_Threshold__Class** type_info = (app::ShaderID_Threshold__Class**)(modloader::win::memory::resolve_rva(0x0475BBA0));
        inline app::ShaderID_Threshold__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Threshold__Class>(type_info, "Colorful", "ShaderID_Threshold");
        }
        inline app::ShaderID_Threshold* create() {
            return il2cpp::create_object<app::ShaderID_Threshold>(get_class());
        }
    } // namespace ShaderID_Threshold
} // namespace app::classes::types
