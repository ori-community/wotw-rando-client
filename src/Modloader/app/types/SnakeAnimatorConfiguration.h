#pragma once
#include <Modloader/app/structs/SnakeAnimatorConfiguration.h>
#include <Modloader/app/structs/SnakeAnimatorConfiguration__Boxed.h>
#include <Modloader/app/structs/SnakeAnimatorConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnakeAnimatorConfiguration {
        inline app::SnakeAnimatorConfiguration__Class** type_info() {
            static app::SnakeAnimatorConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnakeAnimatorConfiguration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnakeAnimatorConfiguration__Class* get_class() {
            return il2cpp::get_class<app::SnakeAnimatorConfiguration__Class>(type_info(), "UnityEngine", "SnakeAnimatorConfiguration");
        }
        inline app::SnakeAnimatorConfiguration* create() {
            return il2cpp::create_object<app::SnakeAnimatorConfiguration>(get_class());
        }
        inline app::SnakeAnimatorConfiguration__Boxed* box(app::SnakeAnimatorConfiguration value) {
            return il2cpp::box_value<app::SnakeAnimatorConfiguration__Boxed>(get_class(), value);
        }
    } // namespace SnakeAnimatorConfiguration
} // namespace app::classes::types
