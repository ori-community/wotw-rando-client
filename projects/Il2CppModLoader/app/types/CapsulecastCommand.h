#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CapsulecastCommand {
        namespace {
            app::CapsulecastCommand__Class* type_info_ref = nullptr;
        }
        app::CapsulecastCommand__Class** type_info = &type_info_ref;
        inline app::CapsulecastCommand__Class* get_class() {
            return il2cpp::get_class<app::CapsulecastCommand__Class>(type_info, "UnityEngine", "CapsulecastCommand");
        }
        inline app::CapsulecastCommand* create() {
            return il2cpp::create_object<app::CapsulecastCommand>(get_class());
        }
        inline app::CapsulecastCommand__Boxed* box(app::CapsulecastCommand value) {
            return il2cpp::box_value<app::CapsulecastCommand__Boxed>(get_class(), value);
        }
        inline app::CapsulecastCommand__Array* create_array(int size) {
            return il2cpp::array_new<app::CapsulecastCommand__Array>(get_class(), size);
        }
    } // namespace CapsulecastCommand
} // namespace app::classes::types
