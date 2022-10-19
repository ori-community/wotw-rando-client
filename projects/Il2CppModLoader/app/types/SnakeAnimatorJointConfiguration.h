#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SnakeAnimatorJointConfiguration {
        namespace {
            inline app::SnakeAnimatorJointConfiguration__Class* type_info_ref = nullptr;
        }
        inline app::SnakeAnimatorJointConfiguration__Class** type_info = &type_info_ref;
        inline app::SnakeAnimatorJointConfiguration__Class* get_class() {
            return il2cpp::get_class<app::SnakeAnimatorJointConfiguration__Class>(type_info, "UnityEngine", "SnakeAnimatorJointConfiguration");
        }
        inline app::SnakeAnimatorJointConfiguration* create() {
            return il2cpp::create_object<app::SnakeAnimatorJointConfiguration>(get_class());
        }
        inline app::SnakeAnimatorJointConfiguration__Boxed* box(app::SnakeAnimatorJointConfiguration value) {
            return il2cpp::box_value<app::SnakeAnimatorJointConfiguration__Boxed>(get_class(), value);
        }
    } // namespace SnakeAnimatorJointConfiguration
} // namespace app::classes::types
