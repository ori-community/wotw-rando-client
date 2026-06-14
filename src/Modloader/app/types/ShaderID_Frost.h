#pragma once
#include <Modloader/app/structs/ShaderID_Frost.h>
#include <Modloader/app/structs/ShaderID_Frost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Frost {
        inline app::ShaderID_Frost__Class** type_info() {
            static app::ShaderID_Frost__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Frost__Class**)(modloader::win::memory::resolve_rva(0x04790E58));
            }
            return cache;
        }
        inline app::ShaderID_Frost__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Frost__Class>(type_info(), "Colorful", "ShaderID_Frost");
        }
        inline app::ShaderID_Frost* create() {
            return il2cpp::create_object<app::ShaderID_Frost>(get_class());
        }
    } // namespace ShaderID_Frost
} // namespace app::classes::types
