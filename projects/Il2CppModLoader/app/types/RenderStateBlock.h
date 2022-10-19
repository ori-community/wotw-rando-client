#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderStateBlock {
        inline app::RenderStateBlock__Class** type_info = (app::RenderStateBlock__Class**)(modloader::win::memory::resolve_rva(0x04774470));
        inline app::RenderStateBlock__Class* get_class() {
            return il2cpp::get_class<app::RenderStateBlock__Class>(type_info, "UnityEngine.Experimental.Rendering", "RenderStateBlock");
        }
        inline app::RenderStateBlock* create() {
            return il2cpp::create_object<app::RenderStateBlock>(get_class());
        }
        inline app::RenderStateBlock__Boxed* box(app::RenderStateBlock value) {
            return il2cpp::box_value<app::RenderStateBlock__Boxed>(get_class(), value);
        }
    } // namespace RenderStateBlock
} // namespace app::classes::types
