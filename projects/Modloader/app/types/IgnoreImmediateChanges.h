#pragma once
#include <Modloader/app/structs/IgnoreImmediateChanges.h>
#include <Modloader/app/structs/IgnoreImmediateChanges__Boxed.h>
#include <Modloader/app/structs/IgnoreImmediateChanges__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IgnoreImmediateChanges {
        inline app::IgnoreImmediateChanges__Class** type_info() {
            static app::IgnoreImmediateChanges__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IgnoreImmediateChanges__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IgnoreImmediateChanges__Class* get_class() {
            return il2cpp::get_class<app::IgnoreImmediateChanges__Class>(type_info(), "", "IgnoreImmediateChanges");
        }
        inline app::IgnoreImmediateChanges* create() {
            return il2cpp::create_object<app::IgnoreImmediateChanges>(get_class());
        }
        inline app::IgnoreImmediateChanges__Boxed* box(app::IgnoreImmediateChanges value) {
            return il2cpp::box_value<app::IgnoreImmediateChanges__Boxed>(get_class(), value);
        }
    } // namespace IgnoreImmediateChanges
} // namespace app::classes::types
