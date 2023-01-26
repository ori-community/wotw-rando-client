#pragma once
#include <Modloader/app/structs/RenameBasedOnText.h>
#include <Modloader/app/structs/RenameBasedOnText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenameBasedOnText {
        inline app::RenameBasedOnText__Class** type_info() {
            static app::RenameBasedOnText__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenameBasedOnText__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenameBasedOnText__Class* get_class() {
            return il2cpp::get_class<app::RenameBasedOnText__Class>(type_info(), "", "RenameBasedOnText");
        }
        inline app::RenameBasedOnText* create() {
            return il2cpp::create_object<app::RenameBasedOnText>(get_class());
        }
    } // namespace RenameBasedOnText
} // namespace app::classes::types
