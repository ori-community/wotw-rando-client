#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageDealer_DamageDirectionMode__Enum__Class.h>
#include <Modloader/app/structs/DamageDealer_DamageDirectionMode__Enum.h>

namespace app::classes::types {
    namespace DamageDealer_DamageDirectionMode__Enum {
        namespace {
            inline app::DamageDealer_DamageDirectionMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DamageDealer_DamageDirectionMode__Enum__Class** type_info = &type_info_ref;
        inline app::DamageDealer_DamageDirectionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageDealer_DamageDirectionMode__Enum__Class>(type_info, "", "DamageDealer", "DamageDirectionMode");
        }
        inline app::DamageDealer_DamageDirectionMode__Enum* create() {
            return il2cpp::create_object<app::DamageDealer_DamageDirectionMode__Enum>(get_class());
        }
    } // namespace DamageDealer_DamageDirectionMode__Enum
} // namespace app::classes::types
