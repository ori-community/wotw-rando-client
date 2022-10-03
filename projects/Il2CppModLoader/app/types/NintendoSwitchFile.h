#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NintendoSwitchFile {
        namespace {
            app::NintendoSwitchFile__Class* type_info_ref = nullptr;
        }
        app::NintendoSwitchFile__Class** type_info = &type_info_ref;
        inline app::NintendoSwitchFile__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchFile__Class>(type_info, "", "NintendoSwitchFile");
        }
        inline app::NintendoSwitchFile* create() {
            return il2cpp::create_object<app::NintendoSwitchFile>(get_class());
        }
    } // namespace NintendoSwitchFile
} // namespace app::classes::types
