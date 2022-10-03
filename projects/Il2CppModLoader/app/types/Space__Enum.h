#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Space__Enum {
        namespace {
            app::Space__Enum__Class* type_info_ref = nullptr;
        }
        app::Space__Enum__Class** type_info = &type_info_ref;
        inline app::Space__Enum__Class* get_class() {
            return il2cpp::get_class<app::Space__Enum__Class>(type_info, "UnityEngine", "Space");
        }
        inline app::Space__Enum* create() {
            return il2cpp::create_object<app::Space__Enum>(get_class());
        }
    } // namespace Space__Enum
} // namespace app::classes::types
