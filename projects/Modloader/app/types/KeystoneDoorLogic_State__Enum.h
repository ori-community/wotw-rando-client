#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeystoneDoorLogic_State__Enum__Class.h>
#include <Modloader/app/structs/KeystoneDoorLogic_State__Enum.h>

namespace app::classes::types {
    namespace KeystoneDoorLogic_State__Enum {
        namespace {
            inline app::KeystoneDoorLogic_State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KeystoneDoorLogic_State__Enum__Class** type_info = &type_info_ref;
        inline app::KeystoneDoorLogic_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KeystoneDoorLogic_State__Enum__Class>(type_info, "", "KeystoneDoorLogic", "State");
        }
        inline app::KeystoneDoorLogic_State__Enum* create() {
            return il2cpp::create_object<app::KeystoneDoorLogic_State__Enum>(get_class());
        }
    } // namespace KeystoneDoorLogic_State__Enum
} // namespace app::classes::types
