#pragma once
#include <Modloader/app/structs/BindingRestrictions_BindingRestrictionsProxy.h>
#include <Modloader/app/structs/BindingRestrictions_BindingRestrictionsProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BindingRestrictions_BindingRestrictionsProxy {
        inline app::BindingRestrictions_BindingRestrictionsProxy__Class** type_info() {
            static app::BindingRestrictions_BindingRestrictionsProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BindingRestrictions_BindingRestrictionsProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BindingRestrictions_BindingRestrictionsProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_BindingRestrictionsProxy__Class>(type_info(), "System.Dynamic", "BindingRestrictions", "BindingRestrictionsProxy");
        }
        inline app::BindingRestrictions_BindingRestrictionsProxy* create() {
            return il2cpp::create_object<app::BindingRestrictions_BindingRestrictionsProxy>(get_class());
        }
    } // namespace BindingRestrictions_BindingRestrictionsProxy
} // namespace app::classes::types
