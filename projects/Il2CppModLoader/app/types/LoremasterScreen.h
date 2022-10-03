#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoremasterScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoremasterScreen__Class** type_info;
        inline app::LoremasterScreen__Class* get_class() {
            return il2cpp::get_class<app::LoremasterScreen__Class>(type_info, "", "LoremasterScreen");
        }
        inline app::LoremasterScreen* create() {
            return il2cpp::create_object<app::LoremasterScreen>(get_class());
        }
    } // namespace LoremasterScreen
} // namespace app::classes::types
