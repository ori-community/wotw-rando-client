#pragma once
#include <Modloader/app/structs/ShaderID_TVVignette.h>
#include <Modloader/app/structs/ShaderID_TVVignette__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_TVVignette {
        inline app::ShaderID_TVVignette__Class** type_info() {
            static app::ShaderID_TVVignette__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_TVVignette__Class**)(modloader::win::memory::resolve_rva(0x047310A0));
            }
            return cache;
        }
        inline app::ShaderID_TVVignette__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_TVVignette__Class>(type_info(), "Colorful", "ShaderID_TVVignette");
        }
        inline app::ShaderID_TVVignette* create() {
            return il2cpp::create_object<app::ShaderID_TVVignette>(get_class());
        }
    } // namespace ShaderID_TVVignette
} // namespace app::classes::types
