#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Rigidbody2D__Array__Class.h>
#include <Modloader/app/structs/Rigidbody2D__Array.h>

namespace app::classes::types {
    namespace Rigidbody2D__Array {
        namespace {
            inline app::Rigidbody2D__Array__Class* type_info_ref = nullptr;
        }
        inline app::Rigidbody2D__Array__Class** type_info = &type_info_ref;
        inline app::Rigidbody2D__Array__Class* get_class() {
            return il2cpp::get_class<app::Rigidbody2D__Array__Class>(type_info, "UnityEngine", "Rigidbody2D[]");
        }
        inline app::Rigidbody2D__Array* create() {
            return il2cpp::create_object<app::Rigidbody2D__Array>(get_class());
        }
    } // namespace Rigidbody2D__Array
} // namespace app::classes::types
