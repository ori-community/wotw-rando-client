#pragma once
#include <Modloader/app/structs/ShaderID_GrainyBlur.h>
#include <Modloader/app/structs/ShaderID_GrainyBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GrainyBlur {
        inline app::ShaderID_GrainyBlur__Class** type_info() {
            static app::ShaderID_GrainyBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_GrainyBlur__Class**)(modloader::win::memory::resolve_rva(0x0473DF50));
            }
            return cache;
        }
        inline app::ShaderID_GrainyBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GrainyBlur__Class>(type_info(), "Colorful", "ShaderID_GrainyBlur");
        }
        inline app::ShaderID_GrainyBlur* create() {
            return il2cpp::create_object<app::ShaderID_GrainyBlur>(get_class());
        }
    } // namespace ShaderID_GrainyBlur
} // namespace app::classes::types
