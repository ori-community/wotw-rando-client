#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExternalKeyboard_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExternalKeyboard_c__Class** type_info;
        inline app::ExternalKeyboard_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ExternalKeyboard_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ExternalKeyboard", "<>c");
        }
        inline app::ExternalKeyboard_c* create() {
            return il2cpp::create_object<app::ExternalKeyboard_c>(get_class());
        }
    } // namespace ExternalKeyboard_c
} // namespace app::classes::types
