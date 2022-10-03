#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredStateTransition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesiredStateTransition__Class** type_info;
        inline app::DesiredStateTransition__Class* get_class() {
            return il2cpp::get_class<app::DesiredStateTransition__Class>(type_info, "Moon.Timeline", "DesiredStateTransition");
        }
        inline app::DesiredStateTransition* create() {
            return il2cpp::create_object<app::DesiredStateTransition>(get_class());
        }
        inline app::DesiredStateTransition__Boxed* box(app::DesiredStateTransition value) {
            return il2cpp::box_value<app::DesiredStateTransition__Boxed>(get_class(), value);
        }
    } // namespace DesiredStateTransition
} // namespace app::classes::types
