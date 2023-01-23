#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CapsuleCollider__Class.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/CapsuleCollider__Array.h>

namespace app::classes::types {
    namespace CapsuleCollider {
        inline app::CapsuleCollider__Class** type_info = (app::CapsuleCollider__Class**)(modloader::win::memory::resolve_rva(0x047237B8));
        inline app::CapsuleCollider__Class* get_class() {
            return il2cpp::get_class<app::CapsuleCollider__Class>(type_info, "UnityEngine", "CapsuleCollider");
        }
        inline app::CapsuleCollider* create() {
            return il2cpp::create_object<app::CapsuleCollider>(get_class());
        }
        inline app::CapsuleCollider__Array* create_array(int size) {
            return il2cpp::array_new<app::CapsuleCollider__Array>(get_class(), size);
        }
        inline app::CapsuleCollider__Array* create_array(const std::vector<app::CapsuleCollider*>& items) {
            return il2cpp::array_new<app::CapsuleCollider__Array>(get_class(), items);
        }
    } // namespace CapsuleCollider
} // namespace app::classes::types
