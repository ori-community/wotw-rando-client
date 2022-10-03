#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AAMode__Enum {
        namespace {
            app::AAMode__Enum__Class* type_info_ref = nullptr;
        }
        app::AAMode__Enum__Class** type_info = &type_info_ref;
        inline app::AAMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AAMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "AAMode");
        }
        inline app::AAMode__Enum* create() {
            return il2cpp::create_object<app::AAMode__Enum>(get_class());
        }
    } // namespace AAMode__Enum
} // namespace app::classes::types
