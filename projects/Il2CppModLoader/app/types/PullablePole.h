#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PullablePole {
        namespace {
            app::PullablePole__Class* type_info_ref = nullptr;
        }
        app::PullablePole__Class** type_info = &type_info_ref;
        inline app::PullablePole__Class* get_class() {
            return il2cpp::get_class<app::PullablePole__Class>(type_info, "Game", "PullablePole");
        }
        inline app::PullablePole* create() {
            return il2cpp::create_object<app::PullablePole>(get_class());
        }
    } // namespace PullablePole
} // namespace app::classes::types
