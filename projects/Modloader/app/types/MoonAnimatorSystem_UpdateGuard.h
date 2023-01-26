#pragma once
#include <Modloader/app/structs/MoonAnimatorSystem_UpdateGuard.h>
#include <Modloader/app/structs/MoonAnimatorSystem_UpdateGuard__Boxed.h>
#include <Modloader/app/structs/MoonAnimatorSystem_UpdateGuard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorSystem_UpdateGuard {
        inline app::MoonAnimatorSystem_UpdateGuard__Class** type_info() {
            static app::MoonAnimatorSystem_UpdateGuard__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimatorSystem_UpdateGuard__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimatorSystem_UpdateGuard__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimatorSystem_UpdateGuard__Class>(type_info(), "Moon", "MoonAnimatorSystem", "UpdateGuard");
        }
        inline app::MoonAnimatorSystem_UpdateGuard* create() {
            return il2cpp::create_object<app::MoonAnimatorSystem_UpdateGuard>(get_class());
        }
        inline app::MoonAnimatorSystem_UpdateGuard__Boxed* box(app::MoonAnimatorSystem_UpdateGuard value) {
            return il2cpp::box_value<app::MoonAnimatorSystem_UpdateGuard__Boxed>(get_class(), value);
        }
    } // namespace MoonAnimatorSystem_UpdateGuard
} // namespace app::classes::types
