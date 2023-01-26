#pragma once
#include <Modloader/app/structs/Shader_1.h>
#include <Modloader/app/structs/Shader_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Shader_1 {
        inline app::Shader_1__Class** type_info() {
            static app::Shader_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Shader_1__Class**)(modloader::win::memory::resolve_rva(0x04781E60));
            }
            return cache;
        }
        inline app::Shader_1__Class* get_class() {
            return il2cpp::get_class<app::Shader_1__Class>(type_info(), "Frameworks", "Shader");
        }
        inline app::Shader_1* create() {
            return il2cpp::create_object<app::Shader_1>(get_class());
        }
    } // namespace Shader_1
} // namespace app::classes::types
