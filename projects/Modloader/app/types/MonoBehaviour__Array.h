#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoBehaviour__Array {
        inline app::MonoBehaviour__Array__Class** type_info = (app::MonoBehaviour__Array__Class**)(modloader::win::memory::resolve_rva(0x0470B8F0));
        inline app::MonoBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::MonoBehaviour__Array__Class>(type_info, "UnityEngine", "MonoBehaviour[]");
        }
        inline app::MonoBehaviour__Array* create() {
            return il2cpp::create_object<app::MonoBehaviour__Array>(get_class());
        }
    } // namespace MonoBehaviour__Array
} // namespace app::classes::types
