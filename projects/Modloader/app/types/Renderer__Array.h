#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Renderer__Array {
        inline app::Renderer__Array__Class** type_info = (app::Renderer__Array__Class**)(modloader::win::memory::resolve_rva(0x04724EC8));
        inline app::Renderer__Array__Class* get_class() {
            return il2cpp::get_class<app::Renderer__Array__Class>(type_info, "UnityEngine", "Renderer[]");
        }
        inline app::Renderer__Array* create() {
            return il2cpp::create_object<app::Renderer__Array>(get_class());
        }
    } // namespace Renderer__Array
} // namespace app::classes::types
