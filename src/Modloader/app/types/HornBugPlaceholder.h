#pragma once
#include <Modloader/app/structs/HornBugPlaceholder.h>
#include <Modloader/app/structs/HornBugPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugPlaceholder {
        inline app::HornBugPlaceholder__Class** type_info() {
            static app::HornBugPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::HornBugPlaceholder__Class>(type_info(), "", "HornBugPlaceholder");
        }
        inline app::HornBugPlaceholder* create() {
            return il2cpp::create_object<app::HornBugPlaceholder>(get_class());
        }
    } // namespace HornBugPlaceholder
} // namespace app::classes::types
