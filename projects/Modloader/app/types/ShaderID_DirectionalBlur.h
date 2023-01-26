#pragma once
#include <Modloader/app/structs/ShaderID_DirectionalBlur.h>
#include <Modloader/app/structs/ShaderID_DirectionalBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DirectionalBlur {
        inline app::ShaderID_DirectionalBlur__Class** type_info() {
            static app::ShaderID_DirectionalBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_DirectionalBlur__Class**)(modloader::win::memory::resolve_rva(0x04798D70));
            }
            return cache;
        }
        inline app::ShaderID_DirectionalBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DirectionalBlur__Class>(type_info(), "Colorful", "ShaderID_DirectionalBlur");
        }
        inline app::ShaderID_DirectionalBlur* create() {
            return il2cpp::create_object<app::ShaderID_DirectionalBlur>(get_class());
        }
    } // namespace ShaderID_DirectionalBlur
} // namespace app::classes::types
