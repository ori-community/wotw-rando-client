#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimatorSystem_UpdateGuard {
        namespace {
            inline app::MoonAnimatorSystem_UpdateGuard__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimatorSystem_UpdateGuard__Class** type_info = &type_info_ref;
        inline app::MoonAnimatorSystem_UpdateGuard__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimatorSystem_UpdateGuard__Class>(type_info, "Moon", "MoonAnimatorSystem", "UpdateGuard");
        }
        inline app::MoonAnimatorSystem_UpdateGuard* create() {
            return il2cpp::create_object<app::MoonAnimatorSystem_UpdateGuard>(get_class());
        }
        inline app::MoonAnimatorSystem_UpdateGuard__Boxed* box(app::MoonAnimatorSystem_UpdateGuard value) {
            return il2cpp::box_value<app::MoonAnimatorSystem_UpdateGuard__Boxed>(get_class(), value);
        }
    } // namespace MoonAnimatorSystem_UpdateGuard
} // namespace app::classes::types
