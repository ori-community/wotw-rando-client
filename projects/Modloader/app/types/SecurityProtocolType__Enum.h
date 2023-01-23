#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SecurityProtocolType__Enum__Class.h>
#include <Modloader/app/structs/SecurityProtocolType__Enum.h>

namespace app::classes::types {
    namespace SecurityProtocolType__Enum {
        namespace {
            inline app::SecurityProtocolType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SecurityProtocolType__Enum__Class** type_info = &type_info_ref;
        inline app::SecurityProtocolType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityProtocolType__Enum__Class>(type_info, "System.Net", "SecurityProtocolType");
        }
        inline app::SecurityProtocolType__Enum* create() {
            return il2cpp::create_object<app::SecurityProtocolType__Enum>(get_class());
        }
    } // namespace SecurityProtocolType__Enum
} // namespace app::classes::types
