#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ELaunchOptionType__Enum__Class.h>
#include <Modloader/app/structs/ELaunchOptionType__Enum.h>

namespace app::classes::types {
    namespace ELaunchOptionType__Enum {
        namespace {
            inline app::ELaunchOptionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ELaunchOptionType__Enum__Class** type_info = &type_info_ref;
        inline app::ELaunchOptionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELaunchOptionType__Enum__Class>(type_info, "Steamworks", "ELaunchOptionType");
        }
        inline app::ELaunchOptionType__Enum* create() {
            return il2cpp::create_object<app::ELaunchOptionType__Enum>(get_class());
        }
    } // namespace ELaunchOptionType__Enum
} // namespace app::classes::types
