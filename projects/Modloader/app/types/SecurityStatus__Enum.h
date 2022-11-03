#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecurityStatus__Enum {
        namespace {
            inline app::SecurityStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SecurityStatus__Enum__Class** type_info = &type_info_ref;
        inline app::SecurityStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityStatus__Enum__Class>(type_info, "System.Net", "SecurityStatus");
        }
        inline app::SecurityStatus__Enum* create() {
            return il2cpp::create_object<app::SecurityStatus__Enum>(get_class());
        }
    } // namespace SecurityStatus__Enum
} // namespace app::classes::types
