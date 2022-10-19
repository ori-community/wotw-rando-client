#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartographerTurningBehaviour {
        namespace {
            inline app::CartographerTurningBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::CartographerTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::CartographerTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CartographerTurningBehaviour__Class>(type_info, "", "CartographerTurningBehaviour");
        }
        inline app::CartographerTurningBehaviour* create() {
            return il2cpp::create_object<app::CartographerTurningBehaviour>(get_class());
        }
    } // namespace CartographerTurningBehaviour
} // namespace app::classes::types
