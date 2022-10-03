#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartographerIdleBehaviour {
        namespace {
            app::CartographerIdleBehaviour__Class* type_info_ref = nullptr;
        }
        app::CartographerIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::CartographerIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CartographerIdleBehaviour__Class>(type_info, "", "CartographerIdleBehaviour");
        }
        inline app::CartographerIdleBehaviour* create() {
            return il2cpp::create_object<app::CartographerIdleBehaviour>(get_class());
        }
    } // namespace CartographerIdleBehaviour
} // namespace app::classes::types
