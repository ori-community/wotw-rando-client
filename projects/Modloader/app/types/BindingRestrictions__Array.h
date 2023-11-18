#pragma once
#include <Modloader/app/structs/BindingRestrictions__Array.h>
#include <Modloader/app/structs/BindingRestrictions__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BindingRestrictions__Array {
        inline app::BindingRestrictions__Array__Class** type_info() {
            static app::BindingRestrictions__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BindingRestrictions__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BindingRestrictions__Array__Class* get_class() {
            return il2cpp::get_class<app::BindingRestrictions__Array__Class>(type_info(), "System.Dynamic", "BindingRestrictions[]");
        }
        inline app::BindingRestrictions__Array* create() {
            return il2cpp::create_object<app::BindingRestrictions__Array>(get_class());
        }
    } // namespace BindingRestrictions__Array
} // namespace app::classes::types
