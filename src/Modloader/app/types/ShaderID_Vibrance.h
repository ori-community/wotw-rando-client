#pragma once
#include <Modloader/app/structs/ShaderID_Vibrance.h>
#include <Modloader/app/structs/ShaderID_Vibrance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Vibrance {
        inline app::ShaderID_Vibrance__Class** type_info() {
            static app::ShaderID_Vibrance__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Vibrance__Class**)(modloader::win::memory::resolve_rva(0x0471BD98));
            }
            return cache;
        }
        inline app::ShaderID_Vibrance__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Vibrance__Class>(type_info(), "Colorful", "ShaderID_Vibrance");
        }
        inline app::ShaderID_Vibrance* create() {
            return il2cpp::create_object<app::ShaderID_Vibrance>(get_class());
        }
    } // namespace ShaderID_Vibrance
} // namespace app::classes::types
