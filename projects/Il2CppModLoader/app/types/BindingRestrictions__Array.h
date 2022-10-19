#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BindingRestrictions__Array {
        namespace {
            inline app::BindingRestrictions__Array__Class* type_info_ref = nullptr;
        }
        inline app::BindingRestrictions__Array__Class** type_info = &type_info_ref;
        inline app::BindingRestrictions__Array__Class* get_class() {
            return il2cpp::get_class<app::BindingRestrictions__Array__Class>(type_info, "System.Dynamic", "BindingRestrictions[]");
        }
        inline app::BindingRestrictions__Array* create() {
            return il2cpp::create_object<app::BindingRestrictions__Array>(get_class());
        }
    } // namespace BindingRestrictions__Array
} // namespace app::classes::types
