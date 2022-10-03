#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NPCMessageBoxWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NPCMessageBoxWrapper__Class** type_info;
        inline app::NPCMessageBoxWrapper__Class* get_class() {
            return il2cpp::get_class<app::NPCMessageBoxWrapper__Class>(type_info, "", "NPCMessageBoxWrapper");
        }
        inline app::NPCMessageBoxWrapper* create() {
            return il2cpp::create_object<app::NPCMessageBoxWrapper>(get_class());
        }
    } // namespace NPCMessageBoxWrapper
} // namespace app::classes::types
