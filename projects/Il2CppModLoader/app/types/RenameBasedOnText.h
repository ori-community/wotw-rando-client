#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenameBasedOnText {
        namespace {
            app::RenameBasedOnText__Class* type_info_ref = nullptr;
        }
        app::RenameBasedOnText__Class** type_info = &type_info_ref;
        inline app::RenameBasedOnText__Class* get_class() {
            return il2cpp::get_class<app::RenameBasedOnText__Class>(type_info, "", "RenameBasedOnText");
        }
        inline app::RenameBasedOnText* create() {
            return il2cpp::create_object<app::RenameBasedOnText>(get_class());
        }
    } // namespace RenameBasedOnText
} // namespace app::classes::types
