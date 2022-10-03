#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PickUpBox {
        namespace {
            app::PickUpBox__Class* type_info_ref = nullptr;
        }
        app::PickUpBox__Class** type_info = &type_info_ref;
        inline app::PickUpBox__Class* get_class() {
            return il2cpp::get_class<app::PickUpBox__Class>(type_info, "RootMotion.Demos", "PickUpBox");
        }
        inline app::PickUpBox* create() {
            return il2cpp::create_object<app::PickUpBox>(get_class());
        }
    } // namespace PickUpBox
} // namespace app::classes::types
