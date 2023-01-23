#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Plane__Array__Class.h>
#include <Modloader/app/structs/Plane__Array.h>

namespace app::classes::types {
    namespace Plane__Array {
        inline app::Plane__Array__Class** type_info = (app::Plane__Array__Class**)(modloader::win::memory::resolve_rva(0x04776BA0));
        inline app::Plane__Array__Class* get_class() {
            return il2cpp::get_class<app::Plane__Array__Class>(type_info, "UnityEngine", "Plane[]");
        }
        inline app::Plane__Array* create() {
            return il2cpp::create_object<app::Plane__Array>(get_class());
        }
    } // namespace Plane__Array
} // namespace app::classes::types
