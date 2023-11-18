#pragma once
#include <Modloader/app/structs/ShaderID_HoldableRigidBody.h>
#include <Modloader/app/structs/ShaderID_HoldableRigidBody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_HoldableRigidBody {
        inline app::ShaderID_HoldableRigidBody__Class** type_info() {
            static app::ShaderID_HoldableRigidBody__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_HoldableRigidBody__Class**)(modloader::win::memory::resolve_rva(0x04766EE8));
            }
            return cache;
        }
        inline app::ShaderID_HoldableRigidBody__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_HoldableRigidBody__Class>(type_info(), "", "ShaderID_HoldableRigidBody");
        }
        inline app::ShaderID_HoldableRigidBody* create() {
            return il2cpp::create_object<app::ShaderID_HoldableRigidBody>(get_class());
        }
    } // namespace ShaderID_HoldableRigidBody
} // namespace app::classes::types
