#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TouchInputModule {
        namespace {
            app::TouchInputModule__Class* type_info_ref = nullptr;
        }
        app::TouchInputModule__Class** type_info = &type_info_ref;
        inline app::TouchInputModule__Class* get_class() {
            return il2cpp::get_class<app::TouchInputModule__Class>(type_info, "UnityEngine.EventSystems", "TouchInputModule");
        }
        inline app::TouchInputModule* create() {
            return il2cpp::create_object<app::TouchInputModule>(get_class());
        }
    } // namespace TouchInputModule
} // namespace app::classes::types
