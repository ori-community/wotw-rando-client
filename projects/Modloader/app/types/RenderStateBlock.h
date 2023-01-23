#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderStateBlock__Class.h>
#include <Modloader/app/structs/RenderStateBlock.h>
#include <Modloader/app/structs/RenderStateBlock__Boxed.h>

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
