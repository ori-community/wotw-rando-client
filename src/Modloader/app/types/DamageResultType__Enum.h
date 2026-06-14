#pragma once
#include <Modloader/app/structs/DamageResultType__Enum.h>
#include <Modloader/app/structs/DamageResultType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageResultType__Enum {
        inline app::DamageResultType__Enum__Class** type_info() {
            static app::DamageResultType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageResultType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageResultType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageResultType__Enum__Class>(type_info(), "", "DamageResultType");
        }
        inline app::DamageResultType__Enum* create() {
            return il2cpp::create_object<app::DamageResultType__Enum>(get_class());
        }
    } // namespace DamageResultType__Enum
} // namespace app::classes::types
