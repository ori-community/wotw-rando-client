#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode__Array__Class.h>
#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode__Array.h>

namespace app::classes::types {
    namespace BindingRestrictions_TestBuilder_AndNode__Array {
        namespace {
            inline app::BindingRestrictions_TestBuilder_AndNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::BindingRestrictions_TestBuilder_AndNode__Array__Class** type_info = &type_info_ref;
        inline app::BindingRestrictions_TestBuilder_AndNode__Array__Class* get_class() {
            return il2cpp::get_class<app::BindingRestrictions_TestBuilder_AndNode__Array__Class>(type_info, "System.Dynamic", "BindingRestrictions+TestBuilder+AndNode[]");
        }
        inline app::BindingRestrictions_TestBuilder_AndNode__Array* create() {
            return il2cpp::create_object<app::BindingRestrictions_TestBuilder_AndNode__Array>(get_class());
        }
    } // namespace BindingRestrictions_TestBuilder_AndNode__Array
} // namespace app::classes::types
