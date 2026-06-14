#pragma once
#include <Modloader/app/structs/ShaderID_Posterize.h>
#include <Modloader/app/structs/ShaderID_Posterize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Posterize {
        inline app::ShaderID_Posterize__Class** type_info() {
            static app::ShaderID_Posterize__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Posterize__Class**)(modloader::win::memory::resolve_rva(0x04762DC0));
            }
            return cache;
        }
        inline app::ShaderID_Posterize__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Posterize__Class>(type_info(), "Colorful", "ShaderID_Posterize");
        }
        inline app::ShaderID_Posterize* create() {
            return il2cpp::create_object<app::ShaderID_Posterize>(get_class());
        }
    } // namespace ShaderID_Posterize
} // namespace app::classes::types
