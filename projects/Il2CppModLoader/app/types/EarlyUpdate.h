#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate {
        namespace {
            app::EarlyUpdate__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate__Class* get_class() {
            return il2cpp::get_class<app::EarlyUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate");
        }
        inline app::EarlyUpdate* create() {
            return il2cpp::create_object<app::EarlyUpdate>(get_class());
        }
        inline app::EarlyUpdate__Boxed* box(app::EarlyUpdate value) {
            return il2cpp::box_value<app::EarlyUpdate__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate
} // namespace app::classes::types
