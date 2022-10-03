#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestroyOnStartUnlessDebug {
        namespace {
            app::DestroyOnStartUnlessDebug__Class* type_info_ref = nullptr;
        }
        app::DestroyOnStartUnlessDebug__Class** type_info = &type_info_ref;
        inline app::DestroyOnStartUnlessDebug__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnStartUnlessDebug__Class>(type_info, "", "DestroyOnStartUnlessDebug");
        }
        inline app::DestroyOnStartUnlessDebug* create() {
            return il2cpp::create_object<app::DestroyOnStartUnlessDebug>(get_class());
        }
    } // namespace DestroyOnStartUnlessDebug
} // namespace app::classes::types
