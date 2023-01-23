#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TriggerByString_TriggerEvent__Enum__Class.h>
#include <Modloader/app/structs/TriggerByString_TriggerEvent__Enum.h>

namespace app::classes::types {
    namespace TriggerByString_TriggerEvent__Enum {
        namespace {
            inline app::TriggerByString_TriggerEvent__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TriggerByString_TriggerEvent__Enum__Class** type_info = &type_info_ref;
        inline app::TriggerByString_TriggerEvent__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TriggerByString_TriggerEvent__Enum__Class>(type_info, "", "TriggerByString", "TriggerEvent");
        }
        inline app::TriggerByString_TriggerEvent__Enum* create() {
            return il2cpp::create_object<app::TriggerByString_TriggerEvent__Enum>(get_class());
        }
    } // namespace TriggerByString_TriggerEvent__Enum
} // namespace app::classes::types
