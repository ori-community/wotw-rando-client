#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NintendoSwitchFile__Class.h>
#include <Modloader/app/structs/NintendoSwitchFile.h>

namespace app::classes::types {
    namespace NintendoSwitchFile {
        namespace {
            inline app::NintendoSwitchFile__Class* type_info_ref = nullptr;
        }
        inline app::NintendoSwitchFile__Class** type_info = &type_info_ref;
        inline app::NintendoSwitchFile__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchFile__Class>(type_info, "", "NintendoSwitchFile");
        }
        inline app::NintendoSwitchFile* create() {
            return il2cpp::create_object<app::NintendoSwitchFile>(get_class());
        }
    } // namespace NintendoSwitchFile
} // namespace app::classes::types
