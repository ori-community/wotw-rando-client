#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UIContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UIContext__Class** type_info;
        inline app::UIContext__Class* get_class() {
            return il2cpp::get_class<app::UIContext__Class>(type_info, "Moon.UI", "UIContext");
        }
        inline app::UIContext* create() {
            return il2cpp::create_object<app::UIContext>(get_class());
        }
    } // namespace UIContext
} // namespace app::classes::types
