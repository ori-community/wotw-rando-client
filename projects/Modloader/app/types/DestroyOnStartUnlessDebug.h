#pragma once
#include <Modloader/app/structs/DestroyOnStartUnlessDebug.h>
#include <Modloader/app/structs/DestroyOnStartUnlessDebug__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyOnStartUnlessDebug {
        inline app::DestroyOnStartUnlessDebug__Class** type_info() {
            static app::DestroyOnStartUnlessDebug__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyOnStartUnlessDebug__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyOnStartUnlessDebug__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnStartUnlessDebug__Class>(type_info(), "", "DestroyOnStartUnlessDebug");
        }
        inline app::DestroyOnStartUnlessDebug* create() {
            return il2cpp::create_object<app::DestroyOnStartUnlessDebug>(get_class());
        }
    } // namespace DestroyOnStartUnlessDebug
} // namespace app::classes::types
