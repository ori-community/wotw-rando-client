#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollisionEventHandler__Array__Class.h>
#include <Modloader/app/structs/CollisionEventHandler__Array.h>

namespace app::classes::types {
    namespace CollisionEventHandler__Array {
        namespace {
            inline app::CollisionEventHandler__Array__Class* type_info_ref = nullptr;
        }
        inline app::CollisionEventHandler__Array__Class** type_info = &type_info_ref;
        inline app::CollisionEventHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::CollisionEventHandler__Array__Class>(type_info, "Moon", "CollisionEventHandler[]");
        }
        inline app::CollisionEventHandler__Array* create() {
            return il2cpp::create_object<app::CollisionEventHandler__Array>(get_class());
        }
    } // namespace CollisionEventHandler__Array
} // namespace app::classes::types
