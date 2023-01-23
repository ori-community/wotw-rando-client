#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DecoratorNode__Array__Class.h>
#include <Modloader/app/structs/DecoratorNode__Array.h>

namespace app::classes::types {
    namespace DecoratorNode__Array {
        namespace {
            inline app::DecoratorNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::DecoratorNode__Array__Class** type_info = &type_info_ref;
        inline app::DecoratorNode__Array__Class* get_class() {
            return il2cpp::get_class<app::DecoratorNode__Array__Class>(type_info, "Moon.BehaviourSystem", "DecoratorNode[]");
        }
        inline app::DecoratorNode__Array* create() {
            return il2cpp::create_object<app::DecoratorNode__Array>(get_class());
        }
    } // namespace DecoratorNode__Array
} // namespace app::classes::types
