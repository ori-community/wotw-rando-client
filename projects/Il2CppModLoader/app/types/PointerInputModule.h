#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointerInputModule {
        namespace {
            app::PointerInputModule__Class* type_info_ref = nullptr;
        }
        app::PointerInputModule__Class** type_info = &type_info_ref;
        inline app::PointerInputModule__Class* get_class() {
            return il2cpp::get_class<app::PointerInputModule__Class>(type_info, "UnityEngine.EventSystems", "PointerInputModule");
        }
        inline app::PointerInputModule* create() {
            return il2cpp::create_object<app::PointerInputModule>(get_class());
        }
    } // namespace PointerInputModule
} // namespace app::classes::types
