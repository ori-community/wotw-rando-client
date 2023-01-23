#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Collider2D__Array__Class.h>
#include <Modloader/app/structs/Collider2D__Array.h>

namespace app::classes::types {
    namespace Collider2D__Array {
        namespace {
            inline app::Collider2D__Array__Class* type_info_ref = nullptr;
        }
        inline app::Collider2D__Array__Class** type_info = &type_info_ref;
        inline app::Collider2D__Array__Class* get_class() {
            return il2cpp::get_class<app::Collider2D__Array__Class>(type_info, "UnityEngine", "Collider2D[]");
        }
        inline app::Collider2D__Array* create() {
            return il2cpp::create_object<app::Collider2D__Array>(get_class());
        }
    } // namespace Collider2D__Array
} // namespace app::classes::types
