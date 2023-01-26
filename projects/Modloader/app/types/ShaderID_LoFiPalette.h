#pragma once
#include <Modloader/app/structs/ShaderID_LoFiPalette.h>
#include <Modloader/app/structs/ShaderID_LoFiPalette__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_LoFiPalette {
        inline app::ShaderID_LoFiPalette__Class** type_info() {
            static app::ShaderID_LoFiPalette__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_LoFiPalette__Class**)(modloader::win::memory::resolve_rva(0x04756570));
            }
            return cache;
        }
        inline app::ShaderID_LoFiPalette__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_LoFiPalette__Class>(type_info(), "Colorful", "ShaderID_LoFiPalette");
        }
        inline app::ShaderID_LoFiPalette* create() {
            return il2cpp::create_object<app::ShaderID_LoFiPalette>(get_class());
        }
    } // namespace ShaderID_LoFiPalette
} // namespace app::classes::types
