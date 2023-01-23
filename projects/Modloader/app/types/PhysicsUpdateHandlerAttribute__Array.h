#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute__Array__Class.h>
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute__Array.h>

namespace app::classes::types {
    namespace PhysicsUpdateHandlerAttribute__Array {
        namespace {
            inline app::PhysicsUpdateHandlerAttribute__Array__Class* type_info_ref = nullptr;
        }
        inline app::PhysicsUpdateHandlerAttribute__Array__Class** type_info = &type_info_ref;
        inline app::PhysicsUpdateHandlerAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicsUpdateHandlerAttribute__Array__Class>(type_info, "Moon", "PhysicsUpdateHandlerAttribute[]");
        }
        inline app::PhysicsUpdateHandlerAttribute__Array* create() {
            return il2cpp::create_object<app::PhysicsUpdateHandlerAttribute__Array>(get_class());
        }
    } // namespace PhysicsUpdateHandlerAttribute__Array
} // namespace app::classes::types
