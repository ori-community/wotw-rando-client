#pragma once
#include <Modloader/app/structs/ShaderID_Negative.h>
#include <Modloader/app/structs/ShaderID_Negative__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Negative {
        inline app::ShaderID_Negative__Class** type_info() {
            static app::ShaderID_Negative__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Negative__Class**)(modloader::win::memory::resolve_rva(0x04708D20));
            }
            return cache;
        }
        inline app::ShaderID_Negative__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Negative__Class>(type_info(), "Colorful", "ShaderID_Negative");
        }
        inline app::ShaderID_Negative* create() {
            return il2cpp::create_object<app::ShaderID_Negative>(get_class());
        }
    } // namespace ShaderID_Negative
} // namespace app::classes::types
