#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_WaveDistortion {
        inline app::ShaderID_WaveDistortion__Class** type_info = (app::ShaderID_WaveDistortion__Class**)(modloader::win::memory::resolve_rva(0x0474E388));
        inline app::ShaderID_WaveDistortion__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_WaveDistortion__Class>(type_info, "Colorful", "ShaderID_WaveDistortion");
        }
        inline app::ShaderID_WaveDistortion* create() {
            return il2cpp::create_object<app::ShaderID_WaveDistortion>(get_class());
        }
    } // namespace ShaderID_WaveDistortion
} // namespace app::classes::types
