#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageRecieverType__Enum {
        namespace {
            app::DamageRecieverType__Enum__Class* type_info_ref = nullptr;
        }
        app::DamageRecieverType__Enum__Class** type_info = &type_info_ref;
        inline app::DamageRecieverType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageRecieverType__Enum__Class>(type_info, "", "DamageRecieverType");
        }
        inline app::DamageRecieverType__Enum* create() {
            return il2cpp::create_object<app::DamageRecieverType__Enum>(get_class());
        }
        inline app::DamageRecieverType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageRecieverType__Enum__Array>(get_class(), size);
        }
        inline app::DamageRecieverType__Enum__Array* create_array(const std::vector<app::DamageRecieverType__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::DamageRecieverType__Enum__Array>(get_class(), items);
        }
    } // namespace DamageRecieverType__Enum
} // namespace app::classes::types
