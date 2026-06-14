#pragma once
#include <Modloader/app/structs/InvisibleOnStartUnlessDebug.h>
#include <Modloader/app/structs/InvisibleOnStartUnlessDebug__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvisibleOnStartUnlessDebug {
        inline app::InvisibleOnStartUnlessDebug__Class** type_info() {
            static app::InvisibleOnStartUnlessDebug__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InvisibleOnStartUnlessDebug__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InvisibleOnStartUnlessDebug__Class* get_class() {
            return il2cpp::get_class<app::InvisibleOnStartUnlessDebug__Class>(type_info(), "", "InvisibleOnStartUnlessDebug");
        }
        inline app::InvisibleOnStartUnlessDebug* create() {
            return il2cpp::create_object<app::InvisibleOnStartUnlessDebug>(get_class());
        }
    } // namespace InvisibleOnStartUnlessDebug
} // namespace app::classes::types
