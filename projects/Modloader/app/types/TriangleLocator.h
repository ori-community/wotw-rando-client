#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriangleLocator {
        inline app::TriangleLocator__Class** type_info = (app::TriangleLocator__Class**)(modloader::win::memory::resolve_rva(0x0475BAC0));
        inline app::TriangleLocator__Class* get_class() {
            return il2cpp::get_class<app::TriangleLocator__Class>(type_info, "TriangleNet", "TriangleLocator");
        }
        inline app::TriangleLocator* create() {
            return il2cpp::create_object<app::TriangleLocator>(get_class());
        }
    } // namespace TriangleLocator
} // namespace app::classes::types
