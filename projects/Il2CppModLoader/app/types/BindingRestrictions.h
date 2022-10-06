#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BindingRestrictions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BindingRestrictions__Class** type_info;
        inline app::BindingRestrictions__Class* get_class() {
            return il2cpp::get_class<app::BindingRestrictions__Class>(type_info, "System.Dynamic", "BindingRestrictions");
        }
        inline app::BindingRestrictions* create() {
            return il2cpp::create_object<app::BindingRestrictions>(get_class());
        }
        inline app::BindingRestrictions__Array* create_array(int size) {
            return il2cpp::array_new<app::BindingRestrictions__Array>(get_class(), size);
        }
        inline app::BindingRestrictions__Array* create_array(const std::vector<app::BindingRestrictions*>& items) {
            return il2cpp::array_new<app::BindingRestrictions__Array>(get_class(), items);
        }
    } // namespace BindingRestrictions
} // namespace app::classes::types
