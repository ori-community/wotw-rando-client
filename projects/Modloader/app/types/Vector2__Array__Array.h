#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Vector2__Array__Array__Class.h>
#include <Modloader/app/structs/Vector2__Array__Array.h>

namespace app::classes::types {
    namespace Vector2__Array__Array {
        inline app::Vector2__Array__Array__Class** type_info = (app::Vector2__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04727258));
        inline app::Vector2__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector2__Array__Array__Class>(type_info, "UnityEngine", "Vector2[][]");
        }
        inline app::Vector2__Array__Array* create() {
            return il2cpp::create_object<app::Vector2__Array__Array>(get_class());
        }
    } // namespace Vector2__Array__Array
} // namespace app::classes::types
