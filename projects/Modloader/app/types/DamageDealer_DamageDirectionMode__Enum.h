#pragma once
#include <Modloader/app/structs/DamageDealer_DamageDirectionMode__Enum.h>
#include <Modloader/app/structs/DamageDealer_DamageDirectionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageDealer_DamageDirectionMode__Enum {
        inline app::DamageDealer_DamageDirectionMode__Enum__Class** type_info() {
            static app::DamageDealer_DamageDirectionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageDealer_DamageDirectionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageDealer_DamageDirectionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageDealer_DamageDirectionMode__Enum__Class>(type_info(), "", "DamageDealer", "DamageDirectionMode");
        }
        inline app::DamageDealer_DamageDirectionMode__Enum* create() {
            return il2cpp::create_object<app::DamageDealer_DamageDirectionMode__Enum>(get_class());
        }
    } // namespace DamageDealer_DamageDirectionMode__Enum
} // namespace app::classes::types
