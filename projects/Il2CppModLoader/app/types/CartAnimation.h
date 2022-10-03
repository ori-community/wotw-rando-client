#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartAnimation {
        namespace {
            app::CartAnimation__Class* type_info_ref = nullptr;
        }
        app::CartAnimation__Class** type_info = &type_info_ref;
        inline app::CartAnimation__Class* get_class() {
            return il2cpp::get_class<app::CartAnimation__Class>(type_info, "", "CartAnimation");
        }
        inline app::CartAnimation* create() {
            return il2cpp::create_object<app::CartAnimation>(get_class());
        }
    } // namespace CartAnimation
} // namespace app::classes::types
