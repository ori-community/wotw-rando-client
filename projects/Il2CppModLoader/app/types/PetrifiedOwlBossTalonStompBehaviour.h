#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTalonStompBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossTalonStompBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossTalonStompBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossTalonStompBehaviour__Class>(type_info, "", "PetrifiedOwlBossTalonStompBehaviour");
        }
        inline app::PetrifiedOwlBossTalonStompBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTalonStompBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossTalonStompBehaviour
} // namespace app::classes::types
