#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BindingRestrictions_TestBuilder {
        inline app::BindingRestrictions_TestBuilder__Class** type_info = (app::BindingRestrictions_TestBuilder__Class**)(modloader::win::memory::resolve_rva(0x04762368));
        inline app::BindingRestrictions_TestBuilder__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_TestBuilder__Class>(type_info, "System.Dynamic", "BindingRestrictions", "TestBuilder");
        }
        inline app::BindingRestrictions_TestBuilder* create() {
            return il2cpp::create_object<app::BindingRestrictions_TestBuilder>(get_class());
        }
    } // namespace BindingRestrictions_TestBuilder
} // namespace app::classes::types
