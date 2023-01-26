#pragma once
#include <Modloader/app/structs/ShaderID_Sharpen.h>
#include <Modloader/app/structs/ShaderID_Sharpen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Sharpen {
        inline app::ShaderID_Sharpen__Class** type_info() {
            static app::ShaderID_Sharpen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Sharpen__Class**)(modloader::win::memory::resolve_rva(0x0470A140));
            }
            return cache;
        }
        inline app::ShaderID_Sharpen__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Sharpen__Class>(type_info(), "Colorful", "ShaderID_Sharpen");
        }
        inline app::ShaderID_Sharpen* create() {
            return il2cpp::create_object<app::ShaderID_Sharpen>(get_class());
        }
    } // namespace ShaderID_Sharpen
} // namespace app::classes::types
