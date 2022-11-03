#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Rigidbody2D {
        namespace {
            inline app::Rigidbody2D__Class* type_info_ref = nullptr;
        }
        inline app::Rigidbody2D__Class** type_info = &type_info_ref;
        inline app::Rigidbody2D__Class* get_class() {
            return il2cpp::get_class<app::Rigidbody2D__Class>(type_info, "UnityEngine", "Rigidbody2D");
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
