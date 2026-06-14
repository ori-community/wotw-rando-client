#pragma once
#include <Modloader/app/structs/MoonAnimatorBootstrapper.h>
#include <Modloader/app/structs/MoonAnimatorBootstrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorBootstrapper {
        inline app::MoonAnimatorBootstrapper__Class** type_info() {
            static app::MoonAnimatorBootstrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimatorBootstrapper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimatorBootstrapper__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorBootstrapper__Class>(type_info(), "Moon", "MoonAnimatorBootstrapper");
        }
        inline app::MoonAnimatorBootstrapper* create() {
            return il2cpp::create_object<app::MoonAnimatorBootstrapper>(get_class());
        }
    } // namespace MoonAnimatorBootstrapper
} // namespace app::classes::types
