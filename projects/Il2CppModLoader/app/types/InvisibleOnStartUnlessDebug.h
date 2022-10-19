#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvisibleOnStartUnlessDebug {
        namespace {
            inline app::InvisibleOnStartUnlessDebug__Class* type_info_ref = nullptr;
        }
        inline app::InvisibleOnStartUnlessDebug__Class** type_info = &type_info_ref;
        inline app::InvisibleOnStartUnlessDebug__Class* get_class() {
            return il2cpp::get_class<app::InvisibleOnStartUnlessDebug__Class>(type_info, "", "InvisibleOnStartUnlessDebug");
        }
        inline app::InvisibleOnStartUnlessDebug* create() {
            return il2cpp::create_object<app::InvisibleOnStartUnlessDebug>(get_class());
        }
    } // namespace InvisibleOnStartUnlessDebug
} // namespace app::classes::types
