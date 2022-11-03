#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VertexHelper {
        inline app::VertexHelper__Class** type_info = (app::VertexHelper__Class**)(modloader::win::memory::resolve_rva(0x04710068));
        inline app::VertexHelper__Class* get_class() {
            return il2cpp::get_class<app::VertexHelper__Class>(type_info, "UnityEngine.UI", "VertexHelper");
        }
        inline app::VertexHelper* create() {
            return il2cpp::create_object<app::VertexHelper>(get_class());
        }
    } // namespace VertexHelper
} // namespace app::classes::types
