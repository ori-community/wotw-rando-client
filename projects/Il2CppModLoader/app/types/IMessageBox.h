#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMessageBox {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMessageBox__Class** type_info;
        inline app::IMessageBox__Class* get_class() {
            return il2cpp::get_class<app::IMessageBox__Class>(type_info, "Moon.InteractionGraph", "IMessageBox");
        }
    } // namespace IMessageBox
} // namespace app::classes::types
