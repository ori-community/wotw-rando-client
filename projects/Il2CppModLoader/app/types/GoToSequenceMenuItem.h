#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GoToSequenceMenuItem {
        namespace {
            app::GoToSequenceMenuItem__Class* type_info_ref = nullptr;
        }
        app::GoToSequenceMenuItem__Class** type_info = &type_info_ref;
        inline app::GoToSequenceMenuItem__Class* get_class() {
            return il2cpp::get_class<app::GoToSequenceMenuItem__Class>(type_info, "", "GoToSequenceMenuItem");
        }
        inline app::GoToSequenceMenuItem* create() {
            return il2cpp::create_object<app::GoToSequenceMenuItem>(get_class());
        }
    } // namespace GoToSequenceMenuItem
} // namespace app::classes::types
