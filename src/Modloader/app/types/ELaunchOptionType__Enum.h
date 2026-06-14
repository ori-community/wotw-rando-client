#pragma once
#include <Modloader/app/structs/ELaunchOptionType__Enum.h>
#include <Modloader/app/structs/ELaunchOptionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ELaunchOptionType__Enum {
        inline app::ELaunchOptionType__Enum__Class** type_info() {
            static app::ELaunchOptionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ELaunchOptionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ELaunchOptionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELaunchOptionType__Enum__Class>(type_info(), "Steamworks", "ELaunchOptionType");
        }
        inline app::ELaunchOptionType__Enum* create() {
            return il2cpp::create_object<app::ELaunchOptionType__Enum>(get_class());
        }
    } // namespace ELaunchOptionType__Enum
} // namespace app::classes::types
