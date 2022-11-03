#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyVelocityCondition {
        namespace {
            inline app::RigidbodyVelocityCondition__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodyVelocityCondition__Class** type_info = &type_info_ref;
        inline app::RigidbodyVelocityCondition__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyVelocityCondition__Class>(type_info, "", "RigidbodyVelocityCondition");
        }
        inline app::RigidbodyVelocityCondition* create() {
            return il2cpp::create_object<app::RigidbodyVelocityCondition>(get_class());
        }
    } // namespace RigidbodyVelocityCondition
} // namespace app::classes::types
