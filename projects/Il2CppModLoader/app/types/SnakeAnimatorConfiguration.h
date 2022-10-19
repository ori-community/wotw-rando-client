#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SnakeAnimatorConfiguration {
        namespace {
            inline app::SnakeAnimatorConfiguration__Class* type_info_ref = nullptr;
        }
        inline app::SnakeAnimatorConfiguration__Class** type_info = &type_info_ref;
        inline app::SnakeAnimatorConfiguration__Class* get_class() {
            return il2cpp::get_class<app::SnakeAnimatorConfiguration__Class>(type_info, "UnityEngine", "SnakeAnimatorConfiguration");
        }
        inline app::SnakeAnimatorConfiguration* create() {
            return il2cpp::create_object<app::SnakeAnimatorConfiguration>(get_class());
        }
        inline app::SnakeAnimatorConfiguration__Boxed* box(app::SnakeAnimatorConfiguration value) {
            return il2cpp::box_value<app::SnakeAnimatorConfiguration__Boxed>(get_class(), value);
        }
    } // namespace SnakeAnimatorConfiguration
} // namespace app::classes::types
