#pragma once
#include <Modloader/app/structs/ShaderID_FastVignette.h>
#include <Modloader/app/structs/ShaderID_FastVignette__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_FastVignette {
        inline app::ShaderID_FastVignette__Class** type_info() {
            static app::ShaderID_FastVignette__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_FastVignette__Class**)(modloader::win::memory::resolve_rva(0x04767148));
            }
            return cache;
        }
        inline app::ShaderID_FastVignette__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FastVignette__Class>(type_info(), "Colorful", "ShaderID_FastVignette");
        }
        inline app::ShaderID_FastVignette* create() {
            return il2cpp::create_object<app::ShaderID_FastVignette>(get_class());
        }
    } // namespace ShaderID_FastVignette
} // namespace app::classes::types
