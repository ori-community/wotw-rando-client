#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneLive {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneLive__Class** type_info;
        inline app::XboxOneLive__Class* get_class() {
            return il2cpp::get_class<app::XboxOneLive__Class>(type_info, "", "XboxOneLive");
        }
        inline app::XboxOneLive* create() {
            return il2cpp::create_object<app::XboxOneLive>(get_class());
        }
    } // namespace XboxOneLive
} // namespace app::classes::types
