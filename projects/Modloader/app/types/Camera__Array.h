#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Camera__Array {
        inline app::Camera__Array__Class** type_info = (app::Camera__Array__Class**)(modloader::win::memory::resolve_rva(0x04713F10));
        inline app::Camera__Array__Class* get_class() {
            return il2cpp::get_class<app::Camera__Array__Class>(type_info, "UnityEngine", "Camera[]");
        }
        inline app::Camera__Array* create() {
            return il2cpp::create_object<app::Camera__Array>(get_class());
        }
    } // namespace Camera__Array
} // namespace app::classes::types
