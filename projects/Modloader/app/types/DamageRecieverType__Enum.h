#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageRecieverType__Enum__Class.h>
#include <Modloader/app/structs/DamageRecieverType__Enum.h>
#include <Modloader/app/structs/DamageRecieverType__Enum__Array.h>

namespace app::classes::types {
    namespace DamageRecieverType__Enum {
        namespace {
            inline app::DamageRecieverType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DamageRecieverType__Enum__Class** type_info = &type_info_ref;
        inline app::DamageRecieverType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageRecieverType__Enum__Class>(type_info, "", "DamageRecieverType");
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
