#pragma once
#include <Modloader/app/structs/EItemUpdateStatus__Enum.h>
#include <Modloader/app/structs/EItemUpdateStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EItemUpdateStatus__Enum {
        inline app::EItemUpdateStatus__Enum__Class** type_info() {
            static app::EItemUpdateStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EItemUpdateStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EItemUpdateStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::EItemUpdateStatus__Enum__Class>(type_info(), "Steamworks", "EItemUpdateStatus");
        }
        inline app::EItemUpdateStatus__Enum* create() {
            return il2cpp::create_object<app::EItemUpdateStatus__Enum>(get_class());
        }
    } // namespace EItemUpdateStatus__Enum
} // namespace app::classes::types
