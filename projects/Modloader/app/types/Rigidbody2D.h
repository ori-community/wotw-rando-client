#pragma once
#include <Modloader/app/structs/Rigidbody2D.h>
#include <Modloader/app/structs/Rigidbody2D__Array.h>
#include <Modloader/app/structs/Rigidbody2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rigidbody2D {
        inline app::Rigidbody2D__Class** type_info() {
            static app::Rigidbody2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Rigidbody2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Rigidbody2D__Class* get_class() {
            return il2cpp::get_class<app::Rigidbody2D__Class>(type_info(), "UnityEngine", "Rigidbody2D");
        }
        inline app::Rigidbody2D* create() {
            return il2cpp::create_object<app::Rigidbody2D>(get_class());
        }
        inline app::Rigidbody2D__Array* create_array(int size) {
            return il2cpp::array_new<app::Rigidbody2D__Array>(get_class(), size);
        }
        inline app::Rigidbody2D__Array* create_array(const std::vector<app::Rigidbody2D*>& items) {
            return il2cpp::array_new<app::Rigidbody2D__Array>(get_class(), items);
        }
    } // namespace Rigidbody2D
} // namespace app::classes::types
