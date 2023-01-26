#pragma once
#include <Modloader/app/structs/ShaderID_AnalogTV.h>
#include <Modloader/app/structs/ShaderID_AnalogTV__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_AnalogTV {
        inline app::ShaderID_AnalogTV__Class** type_info() {
            static app::ShaderID_AnalogTV__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_AnalogTV__Class**)(modloader::win::memory::resolve_rva(0x0470DE10));
            }
            return cache;
        }
        inline app::ShaderID_AnalogTV__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AnalogTV__Class>(type_info(), "Colorful", "ShaderID_AnalogTV");
        }
        inline app::ShaderID_AnalogTV* create() {
            return il2cpp::create_object<app::ShaderID_AnalogTV>(get_class());
        }
    } // namespace ShaderID_AnalogTV
} // namespace app::classes::types
