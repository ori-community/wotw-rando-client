#pragma once
#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode__Array.h>
#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BindingRestrictions_TestBuilder_AndNode__Array {
        inline app::BindingRestrictions_TestBuilder_AndNode__Array__Class** type_info() {
            static app::BindingRestrictions_TestBuilder_AndNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BindingRestrictions_TestBuilder_AndNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BindingRestrictions_TestBuilder_AndNode__Array__Class* get_class() {
            return il2cpp::get_class<app::BindingRestrictions_TestBuilder_AndNode__Array__Class>(type_info(), "System.Dynamic", "BindingRestrictions+TestBuilder+AndNode[]");
        }
        inline app::BindingRestrictions_TestBuilder_AndNode__Array* create() {
            return il2cpp::create_object<app::BindingRestrictions_TestBuilder_AndNode__Array>(get_class());
        }
    } // namespace BindingRestrictions_TestBuilder_AndNode__Array
} // namespace app::classes::types
