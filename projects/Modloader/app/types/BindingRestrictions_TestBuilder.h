#pragma once
#include <Modloader/app/structs/BindingRestrictions_TestBuilder.h>
#include <Modloader/app/structs/BindingRestrictions_TestBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BindingRestrictions_TestBuilder {
        inline app::BindingRestrictions_TestBuilder__Class** type_info() {
            static app::BindingRestrictions_TestBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BindingRestrictions_TestBuilder__Class**)(modloader::win::memory::resolve_rva(0x04762368));
            }
            return cache;
        }
        inline app::BindingRestrictions_TestBuilder__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_TestBuilder__Class>(type_info(), "System.Dynamic", "BindingRestrictions", "TestBuilder");
        }
        inline app::BindingRestrictions_TestBuilder* create() {
            return il2cpp::create_object<app::BindingRestrictions_TestBuilder>(get_class());
        }
    } // namespace BindingRestrictions_TestBuilder
} // namespace app::classes::types
