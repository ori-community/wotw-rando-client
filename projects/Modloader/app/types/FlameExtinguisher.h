#pragma once
#include <Modloader/app/structs/FlameExtinguisher.h>
#include <Modloader/app/structs/FlameExtinguisher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlameExtinguisher {
        inline app::FlameExtinguisher__Class** type_info() {
            static app::FlameExtinguisher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlameExtinguisher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlameExtinguisher__Class* get_class() {
            return il2cpp::get_class<app::FlameExtinguisher__Class>(type_info(), "Moon", "FlameExtinguisher");
        }
        inline app::FlameExtinguisher* create() {
            return il2cpp::create_object<app::FlameExtinguisher>(get_class());
        }
    } // namespace FlameExtinguisher
} // namespace app::classes::types
