#pragma once
#include <Modloader/app/structs/ShaderID_ContrastGain.h>
#include <Modloader/app/structs/ShaderID_ContrastGain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ContrastGain {
        inline app::ShaderID_ContrastGain__Class** type_info() {
            static app::ShaderID_ContrastGain__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ContrastGain__Class**)(modloader::win::memory::resolve_rva(0x04707320));
            }
            return cache;
        }
        inline app::ShaderID_ContrastGain__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ContrastGain__Class>(type_info(), "Colorful", "ShaderID_ContrastGain");
        }
        inline app::ShaderID_ContrastGain* create() {
            return il2cpp::create_object<app::ShaderID_ContrastGain>(get_class());
        }
    } // namespace ShaderID_ContrastGain
} // namespace app::classes::types
