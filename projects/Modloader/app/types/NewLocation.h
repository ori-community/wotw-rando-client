#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewLocation {
        inline app::NewLocation__Class** type_info = (app::NewLocation__Class**)(modloader::win::memory::resolve_rva(0x0472FFE8));
        inline app::NewLocation__Class* get_class() {
            return il2cpp::get_class<app::NewLocation__Class>(type_info, "TriangleNet", "NewLocation");
        }
        inline app::NewLocation* create() {
            return il2cpp::create_object<app::NewLocation>(get_class());
        }
    } // namespace NewLocation
} // namespace app::classes::types
