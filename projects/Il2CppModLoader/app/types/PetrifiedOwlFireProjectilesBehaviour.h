#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFireProjectilesBehaviour {
        namespace {
            app::PetrifiedOwlFireProjectilesBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlFireProjectilesBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlFireProjectilesBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFireProjectilesBehaviour__Class>(type_info, "Moon", "PetrifiedOwlFireProjectilesBehaviour");
        }
        inline app::PetrifiedOwlFireProjectilesBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlFireProjectilesBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlFireProjectilesBehaviour
} // namespace app::classes::types
