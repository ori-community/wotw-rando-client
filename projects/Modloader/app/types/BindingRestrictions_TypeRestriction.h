#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BindingRestrictions_TypeRestriction__Class.h>
#include <Modloader/app/structs/BindingRestrictions_TypeRestriction.h>

namespace app::classes::types {
    namespace BindingRestrictions_TypeRestriction {
        inline app::BindingRestrictions_TypeRestriction__Class** type_info = (app::BindingRestrictions_TypeRestriction__Class**)(modloader::win::memory::resolve_rva(0x04789188));
        inline app::BindingRestrictions_TypeRestriction__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_TypeRestriction__Class>(type_info, "System.Dynamic", "BindingRestrictions", "TypeRestriction");
        }
        inline app::BindingRestrictions_TypeRestriction* create() {
            return il2cpp::create_object<app::BindingRestrictions_TypeRestriction>(get_class());
        }
    } // namespace BindingRestrictions_TypeRestriction
} // namespace app::classes::types
