#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSystemDebuger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveSystemDebuger__Class** type_info;
        inline app::SaveSystemDebuger__Class* get_class() {
            return il2cpp::get_class<app::SaveSystemDebuger__Class>(type_info, "", "SaveSystemDebuger");
        }
        inline app::SaveSystemDebuger* create() {
            return il2cpp::create_object<app::SaveSystemDebuger>(get_class());
        }
    } // namespace SaveSystemDebuger
} // namespace app::classes::types
