#pragma once
#include <Modloader/app/structs/ShaderID_Glitch.h>
#include <Modloader/app/structs/ShaderID_Glitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Glitch {
        inline app::ShaderID_Glitch__Class** type_info() {
            static app::ShaderID_Glitch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Glitch__Class**)(modloader::win::memory::resolve_rva(0x04792388));
            }
            return cache;
        }
        inline app::ShaderID_Glitch__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Glitch__Class>(type_info(), "Colorful", "ShaderID_Glitch");
        }
        inline app::ShaderID_Glitch* create() {
            return il2cpp::create_object<app::ShaderID_Glitch>(get_class());
        }
    } // namespace ShaderID_Glitch
} // namespace app::classes::types
