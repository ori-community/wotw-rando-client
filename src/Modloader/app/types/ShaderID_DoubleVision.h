#pragma once
#include <Modloader/app/structs/ShaderID_DoubleVision.h>
#include <Modloader/app/structs/ShaderID_DoubleVision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DoubleVision {
        inline app::ShaderID_DoubleVision__Class** type_info() {
            static app::ShaderID_DoubleVision__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_DoubleVision__Class**)(modloader::win::memory::resolve_rva(0x0478D578));
            }
            return cache;
        }
        inline app::ShaderID_DoubleVision__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DoubleVision__Class>(type_info(), "Colorful", "ShaderID_DoubleVision");
        }
        inline app::ShaderID_DoubleVision* create() {
            return il2cpp::create_object<app::ShaderID_DoubleVision>(get_class());
        }
    } // namespace ShaderID_DoubleVision
} // namespace app::classes::types
