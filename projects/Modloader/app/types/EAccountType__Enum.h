#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EAccountType__Enum__Class.h>
#include <Modloader/app/structs/EAccountType__Enum.h>

namespace app::classes::types {
    namespace EAccountType__Enum {
        namespace {
            inline app::EAccountType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EAccountType__Enum__Class** type_info = &type_info_ref;
        inline app::EAccountType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EAccountType__Enum__Class>(type_info, "Steamworks", "EAccountType");
        }
        inline app::EAccountType__Enum* create() {
            return il2cpp::create_object<app::EAccountType__Enum>(get_class());
        }
    } // namespace EAccountType__Enum
} // namespace app::classes::types
