#pragma once
#include <Modloader/app/structs/BindingRestrictions_InstanceRestriction.h>
#include <Modloader/app/structs/BindingRestrictions_InstanceRestriction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BindingRestrictions_InstanceRestriction {
        inline app::BindingRestrictions_InstanceRestriction__Class** type_info() {
            static app::BindingRestrictions_InstanceRestriction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BindingRestrictions_InstanceRestriction__Class**)(modloader::win::memory::resolve_rva(0x047461F8));
            }
            return cache;
        }
        inline app::BindingRestrictions_InstanceRestriction__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_InstanceRestriction__Class>(type_info(), "System.Dynamic", "BindingRestrictions", "InstanceRestriction");
        }
        inline app::BindingRestrictions_InstanceRestriction* create() {
            return il2cpp::create_object<app::BindingRestrictions_InstanceRestriction>(get_class());
        }
    } // namespace BindingRestrictions_InstanceRestriction
} // namespace app::classes::types
