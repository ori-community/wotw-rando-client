#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EServerMode__Enum__Class.h>
#include <Modloader/app/structs/EServerMode__Enum.h>

namespace app::classes::types {
    namespace EServerMode__Enum {
        namespace {
            inline app::EServerMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EServerMode__Enum__Class** type_info = &type_info_ref;
        inline app::EServerMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EServerMode__Enum__Class>(type_info, "Steamworks", "EServerMode");
        }
        inline app::EServerMode__Enum* create() {
            return il2cpp::create_object<app::EServerMode__Enum>(get_class());
        }
    } // namespace EServerMode__Enum
} // namespace app::classes::types
