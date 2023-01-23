#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetupStateModifierDataType__Enum__Class.h>
#include <Modloader/app/structs/SetupStateModifierDataType__Enum.h>

namespace app::classes::types {
    namespace SetupStateModifierDataType__Enum {
        namespace {
            inline app::SetupStateModifierDataType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SetupStateModifierDataType__Enum__Class** type_info = &type_info_ref;
        inline app::SetupStateModifierDataType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SetupStateModifierDataType__Enum__Class>(type_info, "", "SetupStateModifierDataType");
        }
        inline app::SetupStateModifierDataType__Enum* create() {
            return il2cpp::create_object<app::SetupStateModifierDataType__Enum>(get_class());
        }
    } // namespace SetupStateModifierDataType__Enum
} // namespace app::classes::types
