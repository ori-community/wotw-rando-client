#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class.h>
#include <Modloader/app/structs/PhysicsSystemPointSet_PhysicsSystemPoint__Array.h>

namespace app::classes::types {
    namespace PhysicsSystemPointSet_PhysicsSystemPoint__Array {
        namespace {
            inline app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class* type_info_ref = nullptr;
        }
        inline app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class** type_info = &type_info_ref;
        inline app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicsSystemPointSet_PhysicsSystemPoint__Array__Class>(type_info, "", "PhysicsSystemPointSet+PhysicsSystemPoint[]");
        }
        inline app::PhysicsSystemPointSet_PhysicsSystemPoint__Array* create() {
            return il2cpp::create_object<app::PhysicsSystemPointSet_PhysicsSystemPoint__Array>(get_class());
        }
    } // namespace PhysicsSystemPointSet_PhysicsSystemPoint__Array
} // namespace app::classes::types
