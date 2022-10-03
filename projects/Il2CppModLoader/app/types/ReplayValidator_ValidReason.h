#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator_ValidReason {
        namespace {
            app::ReplayValidator_ValidReason__Class* type_info_ref = nullptr;
        }
        app::ReplayValidator_ValidReason__Class** type_info = &type_info_ref;
        inline app::ReplayValidator_ValidReason__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplayValidator_ValidReason__Class>(type_info, "Moon.Race", "ReplayValidator", "ValidReason");
        }
        inline app::ReplayValidator_ValidReason* create() {
            return il2cpp::create_object<app::ReplayValidator_ValidReason>(get_class());
        }
        inline app::ReplayValidator_ValidReason__Boxed* box(app::ReplayValidator_ValidReason value) {
            return il2cpp::box_value<app::ReplayValidator_ValidReason__Boxed>(get_class(), value);
        }
    } // namespace ReplayValidator_ValidReason
} // namespace app::classes::types
