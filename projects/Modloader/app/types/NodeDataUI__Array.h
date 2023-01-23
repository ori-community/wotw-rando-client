#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NodeDataUI__Array__Class.h>
#include <Modloader/app/structs/NodeDataUI__Array.h>

namespace app::classes::types {
    namespace NodeDataUI__Array {
        namespace {
            inline app::NodeDataUI__Array__Class* type_info_ref = nullptr;
        }
        inline app::NodeDataUI__Array__Class** type_info = &type_info_ref;
        inline app::NodeDataUI__Array__Class* get_class() {
            return il2cpp::get_class<app::NodeDataUI__Array__Class>(type_info, "Moon.BehaviourSystem.BTEditor", "NodeDataUI[]");
        }
        inline app::NodeDataUI__Array* create() {
            return il2cpp::create_object<app::NodeDataUI__Array>(get_class());
        }
    } // namespace NodeDataUI__Array
} // namespace app::classes::types
