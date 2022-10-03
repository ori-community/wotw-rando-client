#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriLayeredAnimationsController {
        namespace {
            app::OriLayeredAnimationsController__Class* type_info_ref = nullptr;
        }
        app::OriLayeredAnimationsController__Class** type_info = &type_info_ref;
        inline app::OriLayeredAnimationsController__Class* get_class() {
            return il2cpp::get_class<app::OriLayeredAnimationsController__Class>(type_info, "", "OriLayeredAnimationsController");
        }
        inline app::OriLayeredAnimationsController* create() {
            return il2cpp::create_object<app::OriLayeredAnimationsController>(get_class());
        }
    } // namespace OriLayeredAnimationsController
} // namespace app::classes::types
