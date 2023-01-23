#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute__Class.h>
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute.h>
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute__Array.h>

namespace app::classes::types {
    namespace PhysicsUpdateHandlerAttribute {
        namespace {
            inline app::PhysicsUpdateHandlerAttribute__Class* type_info_ref = nullptr;
        }
        inline app::PhysicsUpdateHandlerAttribute__Class** type_info = &type_info_ref;
        inline app::PhysicsUpdateHandlerAttribute__Class* get_class() {
            return il2cpp::get_class<app::PhysicsUpdateHandlerAttribute__Class>(type_info, "Moon", "PhysicsUpdateHandlerAttribute");
        }
        inline app::PhysicsUpdateHandlerAttribute* create() {
            return il2cpp::create_object<app::PhysicsUpdateHandlerAttribute>(get_class());
        }
        inline app::PhysicsUpdateHandlerAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::PhysicsUpdateHandlerAttribute__Array>(get_class(), size);
        }
        inline app::PhysicsUpdateHandlerAttribute__Array* create_array(const std::vector<app::PhysicsUpdateHandlerAttribute*>& items) {
            return il2cpp::array_new<app::PhysicsUpdateHandlerAttribute__Array>(get_class(), items);
        }
    } // namespace PhysicsUpdateHandlerAttribute
} // namespace app::classes::types
