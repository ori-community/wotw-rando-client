#pragma once
#include <Modloader/app/structs/Collider2D.h>
#include <Modloader/app/structs/Collider2D__Array.h>
#include <Modloader/app/structs/Collider2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Collider2D {
        inline app::Collider2D__Class** type_info() {
            static app::Collider2D__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Collider2D__Class**)(modloader::win::memory::resolve_rva(0x0470EC10));
            }
            return cache;
        }
        inline app::Collider2D__Class* get_class() {
            return il2cpp::get_class<app::Collider2D__Class>(type_info(), "UnityEngine", "Collider2D");
        }
        inline app::Collider2D* create() {
            return il2cpp::create_object<app::Collider2D>(get_class());
        }
        inline app::Collider2D__Array* create_array(int size) {
            return il2cpp::array_new<app::Collider2D__Array>(get_class(), size);
        }
        inline app::Collider2D__Array* create_array(const std::vector<app::Collider2D*>& items) {
            return il2cpp::array_new<app::Collider2D__Array>(get_class(), items);
        }
    } // namespace Collider2D
} // namespace app::classes::types
