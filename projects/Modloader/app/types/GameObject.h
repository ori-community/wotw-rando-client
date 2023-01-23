#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameObject__Class.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>

namespace app::classes::types {
    namespace GameObject {
        inline app::GameObject__Class** type_info = (app::GameObject__Class**)(modloader::win::memory::resolve_rva(0x0472EF88));
        inline app::GameObject__Class* get_class() {
            return il2cpp::get_class<app::GameObject__Class>(type_info, "UnityEngine", "GameObject");
        }
        inline app::GameObject* create() {
            return il2cpp::create_object<app::GameObject>(get_class());
        }
        inline app::GameObject__Array* create_array(int size) {
            return il2cpp::array_new<app::GameObject__Array>(get_class(), size);
        }
        inline app::GameObject__Array* create_array(const std::vector<app::GameObject*>& items) {
            return il2cpp::array_new<app::GameObject__Array>(get_class(), items);
        }
    } // namespace GameObject
} // namespace app::classes::types
