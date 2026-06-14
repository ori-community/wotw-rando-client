#pragma once
#include <Modloader/app/structs/ShaderID_Letterbox.h>
#include <Modloader/app/structs/ShaderID_Letterbox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Letterbox {
        inline app::ShaderID_Letterbox__Class** type_info() {
            static app::ShaderID_Letterbox__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Letterbox__Class**)(modloader::win::memory::resolve_rva(0x047155E0));
            }
            return cache;
        }
        inline app::ShaderID_Letterbox__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Letterbox__Class>(type_info(), "Colorful", "ShaderID_Letterbox");
        }
        inline app::ShaderID_Letterbox* create() {
            return il2cpp::create_object<app::ShaderID_Letterbox>(get_class());
        }
    } // namespace ShaderID_Letterbox
} // namespace app::classes::types
