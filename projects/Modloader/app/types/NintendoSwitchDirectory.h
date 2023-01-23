#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NintendoSwitchDirectory__Class.h>
#include <Modloader/app/structs/NintendoSwitchDirectory.h>

namespace app::classes::types {
    namespace NintendoSwitchDirectory {
        namespace {
            inline app::NintendoSwitchDirectory__Class* type_info_ref = nullptr;
        }
        inline app::NintendoSwitchDirectory__Class** type_info = &type_info_ref;
        inline app::NintendoSwitchDirectory__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchDirectory__Class>(type_info, "", "NintendoSwitchDirectory");
        }
        inline app::NintendoSwitchDirectory* create() {
            return il2cpp::create_object<app::NintendoSwitchDirectory>(get_class());
        }
    } // namespace NintendoSwitchDirectory
} // namespace app::classes::types
