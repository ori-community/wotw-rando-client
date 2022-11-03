#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CuthillMcKee {
        inline app::CuthillMcKee__Class** type_info = (app::CuthillMcKee__Class**)(modloader::win::memory::resolve_rva(0x0472BDA0));
        inline app::CuthillMcKee__Class* get_class() {
            return il2cpp::get_class<app::CuthillMcKee__Class>(type_info, "TriangleNet.Tools", "CuthillMcKee");
        }
        inline app::CuthillMcKee* create() {
            return il2cpp::create_object<app::CuthillMcKee>(get_class());
        }
    } // namespace CuthillMcKee
} // namespace app::classes::types
