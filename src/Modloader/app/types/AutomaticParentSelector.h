#pragma once
#include <Modloader/app/structs/AutomaticParentSelector.h>
#include <Modloader/app/structs/AutomaticParentSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutomaticParentSelector {
        inline app::AutomaticParentSelector__Class** type_info() {
            static app::AutomaticParentSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AutomaticParentSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AutomaticParentSelector__Class* get_class() {
            return il2cpp::get_class<app::AutomaticParentSelector__Class>(type_info(), "CatlikeCoding.Utilities", "AutomaticParentSelector");
        }
        inline app::AutomaticParentSelector* create() {
            return il2cpp::create_object<app::AutomaticParentSelector>(get_class());
        }
    } // namespace AutomaticParentSelector
} // namespace app::classes::types
