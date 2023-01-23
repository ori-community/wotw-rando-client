#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_DoubleVision__Class.h>
#include <Modloader/app/structs/ShaderID_DoubleVision.h>

namespace app::classes::types {
    namespace ShaderID_DoubleVision {
        inline app::ShaderID_DoubleVision__Class** type_info = (app::ShaderID_DoubleVision__Class**)(modloader::win::memory::resolve_rva(0x0478D578));
        inline app::ShaderID_DoubleVision__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DoubleVision__Class>(type_info, "Colorful", "ShaderID_DoubleVision");
        }
        inline app::ShaderID_DoubleVision* create() {
            return il2cpp::create_object<app::ShaderID_DoubleVision>(get_class());
        }
    } // namespace ShaderID_DoubleVision
} // namespace app::classes::types
