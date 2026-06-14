#pragma once
#include <Modloader/app/structs/GoToSequenceMenuItem.h>
#include <Modloader/app/structs/GoToSequenceMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoToSequenceMenuItem {
        inline app::GoToSequenceMenuItem__Class** type_info() {
            static app::GoToSequenceMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GoToSequenceMenuItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GoToSequenceMenuItem__Class* get_class() {
            return il2cpp::get_class<app::GoToSequenceMenuItem__Class>(type_info(), "", "GoToSequenceMenuItem");
        }
        inline app::GoToSequenceMenuItem* create() {
            return il2cpp::create_object<app::GoToSequenceMenuItem>(get_class());
        }
    } // namespace GoToSequenceMenuItem
} // namespace app::classes::types
