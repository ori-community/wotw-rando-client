#pragma once
#include <Modloader/app/structs/CrabPlaceholder.h>
#include <Modloader/app/structs/CrabPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabPlaceholder {
        inline app::CrabPlaceholder__Class** type_info() {
            static app::CrabPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CrabPlaceholder__Class>(type_info(), "", "CrabPlaceholder");
        }
        inline app::CrabPlaceholder* create() {
            return il2cpp::create_object<app::CrabPlaceholder>(get_class());
        }
    } // namespace CrabPlaceholder
} // namespace app::classes::types
