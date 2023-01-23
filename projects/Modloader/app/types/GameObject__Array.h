#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameObject__Array__Class.h>
#include <Modloader/app/structs/GameObject__Array.h>

namespace app::classes::types {
    namespace GameObject__Array {
        inline app::GameObject__Array__Class** type_info = (app::GameObject__Array__Class**)(modloader::win::memory::resolve_rva(0x04711C80));
        inline app::GameObject__Array__Class* get_class() {
            return il2cpp::get_class<app::GameObject__Array__Class>(type_info, "UnityEngine", "GameObject[]");
        }
        inline app::GameObject__Array* create() {
            return il2cpp::create_object<app::GameObject__Array>(get_class());
        }
    } // namespace GameObject__Array
} // namespace app::classes::types
