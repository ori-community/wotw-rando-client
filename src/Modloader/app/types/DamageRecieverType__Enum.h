#pragma once
#include <Modloader/app/structs/DamageRecieverType__Enum.h>
#include <Modloader/app/structs/DamageRecieverType__Enum__Array.h>
#include <Modloader/app/structs/DamageRecieverType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageRecieverType__Enum {
        inline app::DamageRecieverType__Enum__Class** type_info() {
            static app::DamageRecieverType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageRecieverType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageRecieverType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageRecieverType__Enum__Class>(type_info(), "", "DamageRecieverType");
        }
        inline app::DamageRecieverType__Enum* create() {
            return il2cpp::create_object<app::DamageRecieverType__Enum>(get_class());
        }
        inline app::DamageRecieverType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageRecieverType__Enum__Array>(get_class(), size);
        }
        inline app::DamageRecieverType__Enum__Array* create_array(const std::vector<app::DamageRecieverType__Enum*>& items) {
            return il2cpp::array_new<app::DamageRecieverType__Enum__Array>(get_class(), items);
        }
    } // namespace DamageRecieverType__Enum
} // namespace app::classes::types
