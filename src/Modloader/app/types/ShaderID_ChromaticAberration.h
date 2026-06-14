#pragma once
#include <Modloader/app/structs/ShaderID_ChromaticAberration.h>
#include <Modloader/app/structs/ShaderID_ChromaticAberration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ChromaticAberration {
        inline app::ShaderID_ChromaticAberration__Class** type_info() {
            static app::ShaderID_ChromaticAberration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ChromaticAberration__Class**)(modloader::win::memory::resolve_rva(0x04756490));
            }
            return cache;
        }
        inline app::ShaderID_ChromaticAberration__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ChromaticAberration__Class>(type_info(), "Colorful", "ShaderID_ChromaticAberration");
        }
        inline app::ShaderID_ChromaticAberration* create() {
            return il2cpp::create_object<app::ShaderID_ChromaticAberration>(get_class());
        }
    } // namespace ShaderID_ChromaticAberration
} // namespace app::classes::types
