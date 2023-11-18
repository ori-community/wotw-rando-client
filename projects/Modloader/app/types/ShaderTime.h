#pragma once
#include <Modloader/app/structs/ShaderTime.h>
#include <Modloader/app/structs/ShaderTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderTime {
        inline app::ShaderTime__Class** type_info() {
            static app::ShaderTime__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderTime__Class**)(modloader::win::memory::resolve_rva(0x047761E8));
            }
            return cache;
        }
        inline app::ShaderTime__Class* get_class() {
            return il2cpp::get_class<app::ShaderTime__Class>(type_info(), "Moon.Rendering", "ShaderTime");
        }
        inline app::ShaderTime* create() {
            return il2cpp::create_object<app::ShaderTime>(get_class());
        }
    } // namespace ShaderTime
} // namespace app::classes::types
