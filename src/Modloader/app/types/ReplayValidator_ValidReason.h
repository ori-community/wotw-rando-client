#pragma once
#include <Modloader/app/structs/ReplayValidator_ValidReason.h>
#include <Modloader/app/structs/ReplayValidator_ValidReason__Boxed.h>
#include <Modloader/app/structs/ReplayValidator_ValidReason__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator_ValidReason {
        inline app::ReplayValidator_ValidReason__Class** type_info() {
            static app::ReplayValidator_ValidReason__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReplayValidator_ValidReason__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReplayValidator_ValidReason__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplayValidator_ValidReason__Class>(type_info(), "Moon.Race", "ReplayValidator", "ValidReason");
        }
        inline app::ReplayValidator_ValidReason* create() {
            return il2cpp::create_object<app::ReplayValidator_ValidReason>(get_class());
        }
        inline app::ReplayValidator_ValidReason__Boxed* box(app::ReplayValidator_ValidReason value) {
            return il2cpp::box_value<app::ReplayValidator_ValidReason__Boxed>(get_class(), value);
        }
    } // namespace ReplayValidator_ValidReason
} // namespace app::classes::types
