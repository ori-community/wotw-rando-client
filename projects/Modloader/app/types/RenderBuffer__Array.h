#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderBuffer__Array {
        inline app::RenderBuffer__Array__Class** type_info = (app::RenderBuffer__Array__Class**)(modloader::win::memory::resolve_rva(0x04729C28));
        inline app::RenderBuffer__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderBuffer__Array__Class>(type_info, "UnityEngine", "RenderBuffer[]");
        }
        inline app::RenderBuffer__Array* create() {
            return il2cpp::create_object<app::RenderBuffer__Array>(get_class());
        }
    } // namespace RenderBuffer__Array
} // namespace app::classes::types
