#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugMode__Enum__Class.h>
#include <Modloader/app/structs/DebugMode__Enum.h>

namespace app::classes::types {
    namespace DebugMode__Enum {
        namespace {
            inline app::DebugMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DebugMode__Enum__Class** type_info = &type_info_ref;
        inline app::DebugMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DebugMode__Enum__Class>(type_info, "uWintab", "DebugMode");
        }
        inline app::DebugMode__Enum* create() {
            return il2cpp::create_object<app::DebugMode__Enum>(get_class());
        }
    } // namespace DebugMode__Enum
} // namespace app::classes::types
