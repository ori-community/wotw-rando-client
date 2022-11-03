#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BoxCollider__Array {
        namespace {
            inline app::BoxCollider__Array__Class* type_info_ref = nullptr;
        }
        inline app::BoxCollider__Array__Class** type_info = &type_info_ref;
        inline app::BoxCollider__Array__Class* get_class() {
            return il2cpp::get_class<app::BoxCollider__Array__Class>(type_info, "UnityEngine", "BoxCollider[]");
        }
        inline app::BoxCollider__Array* create() {
            return il2cpp::create_object<app::BoxCollider__Array>(get_class());
        }
    } // namespace BoxCollider__Array
} // namespace app::classes::types
