#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPhysicsUpdateHandler__Array {
        namespace {
            inline app::IPhysicsUpdateHandler__Array__Class* type_info_ref = nullptr;
        }
        inline app::IPhysicsUpdateHandler__Array__Class** type_info = &type_info_ref;
        inline app::IPhysicsUpdateHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsUpdateHandler__Array__Class>(type_info, "Moon", "IPhysicsUpdateHandler[]");
        }
        inline app::IPhysicsUpdateHandler__Array* create() {
            return il2cpp::create_object<app::IPhysicsUpdateHandler__Array>(get_class());
        }
    } // namespace IPhysicsUpdateHandler__Array
} // namespace app::classes::types
