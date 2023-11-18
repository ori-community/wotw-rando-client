#pragma once
#include <Modloader/app/structs/ShaderKeyword_LightCanvas.h>
#include <Modloader/app/structs/ShaderKeyword_LightCanvas__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderKeyword_LightCanvas {
        inline app::ShaderKeyword_LightCanvas__Class** type_info() {
            static app::ShaderKeyword_LightCanvas__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderKeyword_LightCanvas__Class**)(modloader::win::memory::resolve_rva(0x04771F28));
            }
            return cache;
        }
        inline app::ShaderKeyword_LightCanvas__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_LightCanvas__Class>(type_info(), "", "ShaderKeyword_LightCanvas");
        }
        inline app::ShaderKeyword_LightCanvas* create() {
            return il2cpp::create_object<app::ShaderKeyword_LightCanvas>(get_class());
        }
    } // namespace ShaderKeyword_LightCanvas
} // namespace app::classes::types
