#pragma once
#include <Modloader/app/structs/ShaderID_HueFocus.h>
#include <Modloader/app/structs/ShaderID_HueFocus__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_HueFocus {
        inline app::ShaderID_HueFocus__Class** type_info() {
            static app::ShaderID_HueFocus__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_HueFocus__Class**)(modloader::win::memory::resolve_rva(0x047494E0));
            }
            return cache;
        }
        inline app::ShaderID_HueFocus__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_HueFocus__Class>(type_info(), "Colorful", "ShaderID_HueFocus");
        }
        inline app::ShaderID_HueFocus* create() {
            return il2cpp::create_object<app::ShaderID_HueFocus>(get_class());
        }
    } // namespace ShaderID_HueFocus
} // namespace app::classes::types
