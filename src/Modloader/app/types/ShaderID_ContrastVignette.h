#pragma once
#include <Modloader/app/structs/ShaderID_ContrastVignette.h>
#include <Modloader/app/structs/ShaderID_ContrastVignette__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ContrastVignette {
        inline app::ShaderID_ContrastVignette__Class** type_info() {
            static app::ShaderID_ContrastVignette__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ContrastVignette__Class**)(modloader::win::memory::resolve_rva(0x047438C0));
            }
            return cache;
        }
        inline app::ShaderID_ContrastVignette__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ContrastVignette__Class>(type_info(), "Colorful", "ShaderID_ContrastVignette");
        }
        inline app::ShaderID_ContrastVignette* create() {
            return il2cpp::create_object<app::ShaderID_ContrastVignette>(get_class());
        }
    } // namespace ShaderID_ContrastVignette
} // namespace app::classes::types
