#pragma once
#include <Modloader/app/structs/SplitFlameMenuItem.h>
#include <Modloader/app/structs/SplitFlameMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplitFlameMenuItem {
        inline app::SplitFlameMenuItem__Class** type_info() {
            static app::SplitFlameMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SplitFlameMenuItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SplitFlameMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SplitFlameMenuItem__Class>(type_info(), "", "SplitFlameMenuItem");
        }
        inline app::SplitFlameMenuItem* create() {
            return il2cpp::create_object<app::SplitFlameMenuItem>(get_class());
        }
    } // namespace SplitFlameMenuItem
} // namespace app::classes::types
