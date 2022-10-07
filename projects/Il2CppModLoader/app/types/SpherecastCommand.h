#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpherecastCommand {
        namespace {
            app::SpherecastCommand__Class* type_info_ref = nullptr;
        }
        app::SpherecastCommand__Class** type_info = &type_info_ref;
        inline app::SpherecastCommand__Class* get_class() {
            return il2cpp::get_class<app::SpherecastCommand__Class>(type_info, "UnityEngine", "SpherecastCommand");
        }
        inline app::SpherecastCommand* create() {
            return il2cpp::create_object<app::SpherecastCommand>(get_class());
        }
        inline app::SpherecastCommand__Boxed* box(app::SpherecastCommand value) {
            return il2cpp::box_value<app::SpherecastCommand__Boxed>(get_class(), value);
        }
        inline app::SpherecastCommand__Array* create_array(int size) {
            return il2cpp::array_new<app::SpherecastCommand__Array>(get_class(), size);
        }
        inline app::SpherecastCommand__Array* create_array(const std::vector<app::SpherecastCommand>& items) {
            return il2cpp::array_new<app::SpherecastCommand__Array>(get_class(), items);
        }
    } // namespace SpherecastCommand
} // namespace app::classes::types
