#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BindingRestrictions_BindingRestrictionsProxy {
        namespace {
            inline app::BindingRestrictions_BindingRestrictionsProxy__Class* type_info_ref = nullptr;
        }
        inline app::BindingRestrictions_BindingRestrictionsProxy__Class** type_info = &type_info_ref;
        inline app::BindingRestrictions_BindingRestrictionsProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_BindingRestrictionsProxy__Class>(type_info, "System.Dynamic", "BindingRestrictions", "BindingRestrictionsProxy");
        }
        inline app::BindingRestrictions_BindingRestrictionsProxy* create() {
            return il2cpp::create_object<app::BindingRestrictions_BindingRestrictionsProxy>(get_class());
        }
    } // namespace BindingRestrictions_BindingRestrictionsProxy
} // namespace app::classes::types
