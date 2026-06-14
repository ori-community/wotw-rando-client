#pragma once
#include <Modloader/app/structs/PetrifiedOwlFireProjectilesBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlFireProjectilesBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFireProjectilesBehaviour {
        inline app::PetrifiedOwlFireProjectilesBehaviour__Class** type_info() {
            static app::PetrifiedOwlFireProjectilesBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlFireProjectilesBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlFireProjectilesBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFireProjectilesBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlFireProjectilesBehaviour");
        }
        inline app::PetrifiedOwlFireProjectilesBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlFireProjectilesBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlFireProjectilesBehaviour
} // namespace app::classes::types
