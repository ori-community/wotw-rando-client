#pragma once
#include <Modloader/app/structs/ShaderID_Led.h>
#include <Modloader/app/structs/ShaderID_Led__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Led {
        inline app::ShaderID_Led__Class** type_info() {
            static app::ShaderID_Led__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Led__Class**)(modloader::win::memory::resolve_rva(0x0475FE88));
            }
            return cache;
        }
        inline app::ShaderID_Led__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Led__Class>(type_info(), "Colorful", "ShaderID_Led");
        }
        inline app::ShaderID_Led* create() {
            return il2cpp::create_object<app::ShaderID_Led>(get_class());
        }
    } // namespace ShaderID_Led
} // namespace app::classes::types
