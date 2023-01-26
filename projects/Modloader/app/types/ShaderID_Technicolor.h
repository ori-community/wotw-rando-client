#pragma once
#include <Modloader/app/structs/ShaderID_Technicolor.h>
#include <Modloader/app/structs/ShaderID_Technicolor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Technicolor {
        inline app::ShaderID_Technicolor__Class** type_info() {
            static app::ShaderID_Technicolor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Technicolor__Class**)(modloader::win::memory::resolve_rva(0x0472FC78));
            }
            return cache;
        }
        inline app::ShaderID_Technicolor__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Technicolor__Class>(type_info(), "Colorful", "ShaderID_Technicolor");
        }
        inline app::ShaderID_Technicolor* create() {
            return il2cpp::create_object<app::ShaderID_Technicolor>(get_class());
        }
    } // namespace ShaderID_Technicolor
} // namespace app::classes::types
