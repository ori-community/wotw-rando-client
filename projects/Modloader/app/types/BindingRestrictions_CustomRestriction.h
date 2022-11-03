#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BindingRestrictions_CustomRestriction {
        inline app::BindingRestrictions_CustomRestriction__Class** type_info = (app::BindingRestrictions_CustomRestriction__Class**)(modloader::win::memory::resolve_rva(0x04751148));
        inline app::BindingRestrictions_CustomRestriction__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_CustomRestriction__Class>(type_info, "System.Dynamic", "BindingRestrictions", "CustomRestriction");
        }
        inline app::BindingRestrictions_CustomRestriction* create() {
            return il2cpp::create_object<app::BindingRestrictions_CustomRestriction>(get_class());
        }
    } // namespace BindingRestrictions_CustomRestriction
} // namespace app::classes::types
