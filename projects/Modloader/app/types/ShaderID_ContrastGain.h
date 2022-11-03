#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_ContrastGain {
        inline app::ShaderID_ContrastGain__Class** type_info = (app::ShaderID_ContrastGain__Class**)(modloader::win::memory::resolve_rva(0x04707320));
        inline app::ShaderID_ContrastGain__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ContrastGain__Class>(type_info, "Colorful", "ShaderID_ContrastGain");
        }
        inline app::ShaderID_ContrastGain* create() {
            return il2cpp::create_object<app::ShaderID_ContrastGain>(get_class());
        }
    } // namespace ShaderID_ContrastGain
} // namespace app::classes::types
