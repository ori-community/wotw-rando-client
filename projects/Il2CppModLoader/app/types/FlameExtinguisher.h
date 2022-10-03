#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlameExtinguisher {
        namespace {
            app::FlameExtinguisher__Class* type_info_ref = nullptr;
        }
        app::FlameExtinguisher__Class** type_info = &type_info_ref;
        inline app::FlameExtinguisher__Class* get_class() {
            return il2cpp::get_class<app::FlameExtinguisher__Class>(type_info, "Moon", "FlameExtinguisher");
        }
        inline app::FlameExtinguisher* create() {
            return il2cpp::create_object<app::FlameExtinguisher>(get_class());
        }
    } // namespace FlameExtinguisher
} // namespace app::classes::types
