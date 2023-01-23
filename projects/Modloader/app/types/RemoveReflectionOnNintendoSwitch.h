#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoveReflectionOnNintendoSwitch__Class.h>
#include <Modloader/app/structs/RemoveReflectionOnNintendoSwitch.h>

namespace app::classes::types {
    namespace RemoveReflectionOnNintendoSwitch {
        namespace {
            inline app::RemoveReflectionOnNintendoSwitch__Class* type_info_ref = nullptr;
        }
        inline app::RemoveReflectionOnNintendoSwitch__Class** type_info = &type_info_ref;
        inline app::RemoveReflectionOnNintendoSwitch__Class* get_class() {
            return il2cpp::get_class<app::RemoveReflectionOnNintendoSwitch__Class>(type_info, "Moon.Utilities", "RemoveReflectionOnNintendoSwitch");
        }
        inline app::RemoveReflectionOnNintendoSwitch* create() {
            return il2cpp::create_object<app::RemoveReflectionOnNintendoSwitch>(get_class());
        }
    } // namespace RemoveReflectionOnNintendoSwitch
} // namespace app::classes::types
