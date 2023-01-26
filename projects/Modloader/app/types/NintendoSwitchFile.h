#pragma once
#include <Modloader/app/structs/NintendoSwitchFile.h>
#include <Modloader/app/structs/NintendoSwitchFile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoSwitchFile {
        inline app::NintendoSwitchFile__Class** type_info() {
            static app::NintendoSwitchFile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NintendoSwitchFile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NintendoSwitchFile__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchFile__Class>(type_info(), "", "NintendoSwitchFile");
        }
        inline app::NintendoSwitchFile* create() {
            return il2cpp::create_object<app::NintendoSwitchFile>(get_class());
        }
    } // namespace NintendoSwitchFile
} // namespace app::classes::types
